#ifndef __HIREDIS_FMACRO_H
#define __HIREDIS_FMACRO_H

#if !defined(_BSD_SOURCE)
#define _BSD_SOURCE
#endif

#if defined(__sun__)
#define _POSIX_C_SOURCE 200112L
#elif defined(__linux__) || defined(__OpenBSD__) || defined(__NetBSD__)
#define _XOPEN_SOURCE 600
#elif defined(__CYGWIN__)
#   pragma message("This is CYGWIN GCC compiler")
#elif defined(__MINGW32__)
#   include <_mingw.h>
#   if defined(__MINGW64__)
#       pragma message("This is MinGW64 x86_64 GCC compiler")
#       define _XOPEN_SOURCE 600
#   elif defined(__MINGW32__)
#       ifdef __MINGW64_VERSION_MAJOR
#           pragma message("This is MinGW64 i686 GCC compiler")
#       else
#           pragma message("This is MinGW32 GCC compiler")
#       endif
#   endif
#   define _XOPEN_SOURCE 600
#else
#define _XOPEN_SOURCE
#endif

#endif
