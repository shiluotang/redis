ACLOCAL_AMFLAGS = -I m4

AM_CPPFLAGS = -Wall
AM_CFLAGS	=
AM_CXXFLAGS =
AM_LDFLAGS	= -no-undefined

lib_LTLIBRARIES = libhiredis.la
libhiredis_la_SOURCES = \
					   ./async.c \
					   ./dict.c \
					   ./hiredis.c \
					   ./net.c \
					   ./sds.c \
					   ../../src/adlist.c \
					   ../../src/zmalloc.c \
					   ../../src/win32fixes.c \
					   ../../src/win32_wsiocp.c \
					   ../../src/ae.c \
					   ../../src/util.c
libhiredis_la_LDFLAGS = $(AM_LDFLAGS) -lws2_32

nobase_pkginclude_HEADERS = \
./async.h \
./dict.h \
./fmacros.h \
./hiredis.h \
./net.h \
./sds.h
