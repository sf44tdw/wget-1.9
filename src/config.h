/* src/config.h.  Generated from config.h.in by configure.  */
/* Configuration header file.
   Copyright (C) 1995, 1996, 1997, 1998, 2000, 2001
   Free Software Foundation, Inc.

This file is part of GNU Wget.

GNU Wget is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

GNU Wget is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Wget; if not, write to the Free Software
Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

In addition, as a special exception, the Free Software Foundation
gives permission to link the code of its release of Wget with the
OpenSSL project's "OpenSSL" library (or with modified versions of it
that use the same license as the "OpenSSL" library), and distribute
the linked executables.  You must obey the GNU General Public License
in all respects for all of the code used other than "OpenSSL".  If you
modify this file, you may extend this exception to your version of the
file, but you are not obligated to do so.  If you do not wish to do
so, delete this exception statement from your version.  */

#ifndef CONFIG_H
#define CONFIG_H

/* Define if you have the <alloca.h> header file.  */
#define HAVE_ALLOCA_H 1

/* AIX requires this to be the first thing in the file.  */
#ifdef __GNUC__
# define alloca __builtin_alloca
#else
# if HAVE_ALLOCA_H
#  include <alloca.h>
# else
#  ifdef _AIX
 #pragma alloca
#  else
#   ifndef alloca /* predefined by HP cc +Olibcalls */
char *alloca ();
#   endif
#  endif
# endif
#endif

/* Define if on AIX 3.
   System headers sometimes define this.
   We just want to avoid a redefinition error message.  */
#ifndef _ALL_SOURCE
#define _ALL_SOURCE 1
#endif

/* Define to empty if the keyword does not work.  */
/* #undef const */

/* Define to empty or __inline__ or __inline.  */
/* #undef inline */

/* Define to `unsigned' if <sys/types.h> doesn't define.  */
/* #undef size_t */

/* Define to `int' if <sys/types.h> doesn't define.  */
/* #undef pid_t */

/* Define if you have the ANSI C header files.  */
#define STDC_HEADERS 1

/* Define as the return type of signal handlers (int or void).  */
#define RETSIGTYPE void

/* Define if your architecture is big endian (with the most
   significant byte first).  */
/* #undef WORDS_BIGENDIAN */

/* Define to the length of short. */
#define SIZEOF_SHORT 2

/* Define to the length of int. */
#define SIZEOF_INT 4

/* Define to the length of long. */
#define SIZEOF_LONG 8

/* Define to the length of long long. */
#define SIZEOF_LONG_LONG 8

/* Define this if you want the NLS support.  */
#define HAVE_NLS 1

/* Define if you want the FTP support for Opie compiled in.  */
#define USE_OPIE 1

/* Define if you want the HTTP Digest Authorization compiled in.  */
#define USE_DIGEST 1

/* Define if you want the debug output support compiled in.  */
#define ENABLE_DEBUG 1

/* Define if you have sys/time.h header.  */
#define HAVE_SYS_TIME_H 1

/* Define if you can safely include both <sys/time.h> and <time.h>.  */
#define TIME_WITH_SYS_TIME 1

/* Define if you have struct utimbuf.  */
#define HAVE_STRUCT_UTIMBUF 1

/* Define if you have the uname function.  */
#define HAVE_UNAME 1

/* Define if you have a working version of mmap.  */
#define HAVE_MMAP 1

/* Define if you have the gethostname function.  */
#define HAVE_GETHOSTNAME 1

/* Define if you have the select function.  */
#define HAVE_SELECT 1

/* Define if you have the gettimeofday function.  */
#define HAVE_GETTIMEOFDAY 1

/* Define if you have the strdup function.  */
#define HAVE_STRDUP 1

/* Define if you have the sys/utsname.h header.  */
#define HAVE_SYS_UTSNAME_H 1

/* Define if you have the strerror function.  */
#define HAVE_STRERROR 1

/* Define if you have the snprintf function.  */
#define HAVE_SNPRINTF 1

/* Define if you have the vsnprintf function.  */
#define HAVE_VSNPRINTF 1

/* Define if you have the strstr function.  */
#define HAVE_STRSTR 1

/* Define if you have the strcasecmp function.  */
#define HAVE_STRCASECMP 1

/* Define if you have the strncasecmp function.  */
#define HAVE_STRNCASECMP 1

/* Define if you have the strpbrk function.  */
#define HAVE_STRPBRK 1

/* Define if you have the memmove function.  */
#define HAVE_MEMMOVE 1

/* Define if you have the strptime function.  */
#define HAVE_STRPTIME 1

/* Define if you have the mktime function.  */
#define HAVE_MKTIME 1

/* Define if you have the symlink function.  */
#define HAVE_SYMLINK 1

/* Define if you have the access function.  */
#define HAVE_ACCESS 1

/* Define if you have the isatty function.  */
#define HAVE_ISATTY 1

/* Define if you have the signal function.  */
#define HAVE_SIGNAL 1

/* Define if you have the sigsetjmp function.  */
/* #undef HAVE_SIGSETJMP */

/* Define if you have the sigblock function.  */
#define HAVE_SIGBLOCK 1

/* Define if you have the gettext function.  */
#define HAVE_GETTEXT 1

/* Define if you have the usleep function.  */
#define HAVE_USLEEP 1

/* Define if you have the <string.h> header file.  */
#define HAVE_STRING_H 1

/* Define if you have the <stdarg.h> header file.  */
#define HAVE_STDARG_H 1

/* Define if you have the <unistd.h> header file.  */
#define HAVE_UNISTD_H 1

/* Define if you have the <utime.h> header file.  */
#define HAVE_UTIME_H 1

/* Define if you have the <sys/utime.h> header file.  */
/* #undef HAVE_SYS_UTIME_H */

/* Define if you have the <termios.h> header file.  */
#define HAVE_TERMIOS_H 1

/* Define if you have the <sys/ioctl.h> header file.  */
#define HAVE_SYS_IOCTL_H 1

/* Define if you have the <sys/select.h> header file.  */
#define HAVE_SYS_SELECT_H 1

/* Define if you have the <pwd.h> header file.  */
#define HAVE_PWD_H 1

/* Define if you have the <signal.h> header file.  */
#define HAVE_SIGNAL_H 1

/* Define if you have the <setjmp.h> header file.  */
#define HAVE_SETJMP_H 1

/* Define if you have the <libintl.h> header file.  */
#define HAVE_LIBINTL_H 1

/* Define if you have the <locale.h> header file.  */
#define HAVE_LOCALE_H 1

/* Define to be the name of the operating system.  */
#define OS_TYPE "linux-gnu"

/* Define if you wish to compile with socks support.  */
/* #undef HAVE_SOCKS */

/* Define to 1 if ANSI function prototypes are usable.  */
#define PROTOTYPES 1

/* Define if all libs needed for ssl support are existing */
#define HAVE_SSL 1

/* Define if we're compiling in support for MD5.  */
#define HAVE_MD5 1

/* Define if we're using Solaris libmd5.  */
/* #undef HAVE_SOLARIS_MD5 */

/* Define if we're using OpenSSL md5.  */
#define HAVE_OPENSSL_MD5 1

/* Define if we're using builtin (GNU) md5.c.  */
/* #undef HAVE_BUILTIN_MD5 */

/* Define if you have the getaddrinfo function.  */
/* #undef HAVE_GETADDRINFO */

/* Define if the system headers support the AI_ADDRCONFIG flag. */
/* #undef HAVE_GETADDRINFO_AI_ADDRCONFIG */

/* Define if the system headers support the AI_V4MAPPED flag. */
/* #undef HAVE_GETADDRINFO_AI_V4MAPPED */

/* Define if the system headers support the AI_ALL flag. */
/* #undef HAVE_GETADDRINFO_AI_ALL */

/* Define if the system supports struct sockaddr_in6 */
/* #undef HAVE_HAVE_STRUCT_SOCKADDR_IN6 */

/* Define if struct sockaddr_in6 has the sin6_scope_id member */
/* #undef HAVE_SOCKADDR_IN6_SCOPE_ID */

/* Define if you want to enable the IPv6 support.  */
/* #undef ENABLE_IPV6 */

/* Defined to int or size_t on systems without socklen_t.  */
/* #undef socklen_t */

/* Define if you have u_int32_t.  */
#define HAVE_U_INT32_T 1

/* First a gambit to see whether we're on Solaris.  We'll
   need it below.  */
#ifdef __sun
# ifdef __SVR4
#  define solaris
# endif
#endif

/* The following several lines can be very dangerous; they can cripple
   the header files and break compilation in _verY_ non-obvious ways.
   Because of that, we define them only on architectures we know
   about.  */

/* #undef NAMESPACE_TWEAKS */

#ifdef solaris
# define NAMESPACE_TWEAKS
# ifdef __GNUC__
/* Prevent stdio.h from declaring va_list and thus tripping gcc's
   stdarg.h. */
#  define _VA_LIST
# endif
#endif

#ifdef __linux__
# define NAMESPACE_TWEAKS
#endif

#ifdef NAMESPACE_TWEAKS

/* Request the "Unix 98 compilation environment". */
#define _XOPEN_SOURCE 500

/* For Solaris: request everything else that is available and doesn't
   conflict with the above.  */
#define __EXTENSIONS__ 1

/* For Linux: request features of 4.3BSD and SVID (System V Interface
   Definition). */
#define _SVID_SOURCE
#define _BSD_SOURCE

#endif /* NAMESPACE_TWEAKS */

#endif /* CONFIG_H */
