ACLOCAL_AMFLAGS = -I m4

AM_CPPFLAGS = -Wall
AM_CFLAGS	=
AM_CXXFLAGS =
AM_LDFLAGS	= -no-undefined

lib_LTLIBRARIES = libhiredis.la
libhiredis_la_SOURCES = \
					   ./deps/hiredis/async.c \
					   ./deps/hiredis/dict.c \
					   ./deps/hiredis/hiredis.c \
					   ./deps/hiredis/net.c \
					   ./deps/hiredis/sds.c \
					   ./src/adlist.c \
					   ./src/zmalloc.c \
					   ./src/win32fixes.c \
					   ./src/ae_wsiocp.c \
					   ./src/win32_wsiocp.c \
					   ./src/util.c \
					   ./src/ae.c
libhiredis_la_LDFLAGS = $(AM_LDFLAGS) -lws2_32
