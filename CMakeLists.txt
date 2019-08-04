cmake_minimum_required(VERSION 3.14.0)
set(CMAKE_VERBOSE_MAKEFILE ON)
project (cd-gamedriver)

find_package(BISON REQUIRED)
find_package(PkgConfig REQUIRED)
pkg_check_modules(JSONC REQUIRED json-c)

set(MUD_LIB /home/mpd/git-sources/edge/mud/lib)
set(BINDIR /home/mpd/git-sources/edge/mud/bin)

set(SRC array.c backend.c call_out.c comm1.c debug.c ed.c hash.c
    hname.c interface.c interpret.c lex.c main.c mapping.c mstring.c
    mudstat.c ndesc.c net.c nqueue.c object.c otable.c parse.c port.c regexp.c
    random.c signals.c simulate.c simul_efun.c sprintf.c super_snoop.c
    tcpsvc.c telnet.c udpsvc.c wildmat.c stdmalloc.c json.c siphash.c memory.c
    ansi_color.c )
set(HEADERS comm.h config.h exec.h incralloc.h inline_eqs.h inline_svalue.h
    instrs.h interface.h interpret.h mapping.h master.h master.t
    mstring.h mudstat.h net.h object.h patchlevel.h regexp.h sent.h
    backend.h bibopmalloc.h json.h random.h siphash.h memory.h ansi_color.h)
set(ISRC clib/efun.c clib/stdobject.c clib/gl_language.c)
set(CSRC ${SRC} lang.c)

SET(CMAKE_C_COMPILER gcc)
set(CMAKE_C_FLAGS_DEBUG -ggdb)

include_directories(${CMAKE_BINARY_DIR} ${CMAKE_SOURCE_DIR})

add_compile_definitions(
    MUD_LIB="${MUD_LIB}"
    BINDIR="${BINDIR}"
)

#
# Enable run time debugging. It will use more time and space.
# When the flag is changed, be sure to recompile everything.
# Simply comment out these lines if not wanted.
# If you change anything in the source, you are strongly encouraged to have
# DEBUG defined.
# If you will not change anything, you are still strongly to have it defined,
# as long as the game is not bug free.
#add_compile_definitions(
#    DEBUG
#)

add_custom_command(
    OUTPUT func_spec.i
    DEPENDS ${CMAKE_SOURCE_DIR}/func_spec.c
    COMMAND ${CMAKE_C_COMPILER} -E ${CMAKE_C_FLAGS} ${CMAKE_SOURCE_DIR}/func_spec.c > func_spec.i
)
add_custom_command(
    OUTPUT master.t master.h
    DEPENDS master.n genfkntab
    COMMAND ./genfkntab m master <${CMAKE_SOURCE_DIR}/master.n
)
add_custom_command(
    OUTPUT make_func.c
    DEPENDS make_func.y
    COMMAND bison -y -o make_func.c ${CMAKE_SOURCE_DIR}/make_func.y
)
add_custom_command(
    OUTPUT efun_table.h
    DEPENDS lang.h make_table
    COMMAND ./make_table lang.h efun_table.h
)

# make_func assumes the presence of some additional files in the same dir,
# so we copy the ones it needs from the source dir.
add_custom_command(
    OUTPUT lang.y efun_defs.c
    DEPENDS func_spec.i make_func ${CMAKE_SOURCE_DIR}/prelang.y ${CMAKE_SOURCE_DIR}/postlang.y ${CMAKE_SOURCE_DIR}/config.h
    COMMAND cp ${CMAKE_SOURCE_DIR}/prelang.y ${CMAKE_SOURCE_DIR}/postlang.y .
    COMMAND ./make_func > tmp_efun_defs
    COMMAND sed -e \"s/,,/,T_STRING|T_NUMBER|T_POINTER|T_OBJECT|T_MAPPING|T_FLOAT|T_FUNCTION,/\" tmp_efun_defs > efun_defs.c
    COMMAND rm tmp_efun_defs
)
add_custom_command(
    OUTPUT lang.c lang.h
    DEPENDS lang.y
    COMMAND bison -y -o lang.c -d lang.y
)

#
# Driver compile/link config
#
add_executable(driver ${CSRC} ${ISRC} efun_table.h master.h)
target_link_libraries(driver ${JSONC_LIBRARIES} crypt m)
target_include_directories(
    driver
    PUBLIC ${JSONC_INCLUDE_DIRS}
)
target_compile_options(
    driver
    PUBLIC ${JSONC_CFLAGS_OTHER}
    PRIVATE -pipe -L/usr/local/include/ -L/usr/include -O3 -fgnu89-inline -Wall -Wformat=2
)
set_property(DIRECTORY APPEND PROPERTY ADDITIONAL_MAKE_CLEAN_FILES
    master.h
    master.t
    prelang.y
    postlang.y
)
set_property(TARGET driver PROPERTY C_STANDARD 99)
set_property(TARGET driver PROPERTY INTERPROCEDURAL_OPTIMIZATION TRUE)
install(TARGETS driver
    CONFIGURATIONS Debug Release
    RUNTIME DESTINATION ${BINDIR})

# Ancillary executables.
add_executable(genfkntab genfkntab.c)
add_executable(make_table make_table.c)
add_executable(make_func make_func.c)

# Utils
add_executable(hname util/hname.c)
set_target_properties(
    hname
    PROPERTIES EXCLUDE_FROM_ALL TRUE
)
add_custom_command(
    OUTPUT restart_mud
    DEPENDS util/restart_mud.sh
    COMMAND sed -e "s;MUD_LIB;${MUD_LIB};" -e "s;BINDIR;${BINDIR};" ${CMAKE_SOURCE_DIR}/util/restart_mud.sh > restart_mud
    VERBATIM
)
install(TARGETS hname
    EXCLUDE_FROM_ALL
    CONFIGURATIONS Debug Release
    RUNTIME DESTINATION ${BINDIR}
)
install(PROGRAMS restart_mud
    EXCLUDE_FROM_ALL
    CONFIGURATIONS Debug Release
    RUNTIME DESTINATION ${BINDIR}
)
add_custom_target(
    utils
    DEPENDS hname restart_mud
)
