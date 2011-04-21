CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
PROJECT(harfbuzz C)

INCLUDE(FindPkgConfig)
pkg_check_modules(pkgs REQUIRED libxml-2.0)

SET(SRCS
	src/harfbuzz-dump.c
	src/harfbuzz-shaper-all.c
	src/harfbuzz-external.c
	src/harfbuzz.c)

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR}/include)

ADD_LIBRARY(${PROJECT_NAME} SHARED ${SRCS})

INSTALL(TARGETS ${PROJECT_NAME} DESTINATION lib)
INSTALL(DIRECTORY ${CMAKE_SOURCE_DIR}/include DESTINATION include/${PROJECT_NAME})
INSTALL(FILES ${CMAKE_SOURCE_DIR}/${PROJECT_NAME}.pc DESTINATION lib/pkgconfig)
