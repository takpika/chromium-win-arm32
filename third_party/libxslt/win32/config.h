/*
 * Summary: Windows configuration header
 * Description: Windows configuration header
 *
 * Copy: See Copyright for the status of this software.
 *
 * Author: Igor Zlatkovic
 */
#ifndef __LIBXSLT_WIN32_CONFIG__
#define __LIBXSLT_WIN32_CONFIG__

/* snprintf emulation taken from http://stackoverflow.com/a/8712996/1956010 */
#if defined(_MSC_VER) && _MSC_VER < 1900

#include <stdarg.h>
#include <stdio.h>

#define snprintf c99_snprintf
#define vsnprintf c99_vsnprintf

__inline int c99_vsnprintf(char *outBuf, size_t size, const char *format, va_list ap)
{
    int count = -1;

    if (size != 0)
        count = _vsnprintf_s(outBuf, size, _TRUNCATE, format, ap);
    if (count == -1)
        count = _vscprintf(format, ap);

    return count;
}

__inline int c99_snprintf(char *outBuf, size_t size, const char *format, ...)
{
    int count;
    va_list ap;

    va_start(ap, format);
    count = c99_vsnprintf(outBuf, size, format, ap);
    va_end(ap);

    return count;
}

#endif /* defined(_MSC_VER) && _MSC_VER < 1900 */

#define HAVE_SYS_STAT_H
/* win-arm32 (llvm-mingw): unlike MSVC, mingw provides a native POSIX
 * stat(const char*, struct stat*) (generic-w64-mingw32/include/sys/stat.h:153),
 * so use HAVE_STAT like the linux/mac configs. Defining HAVE__STAT here (the
 * MSVC path) makes security.c remap stat->_stat (=_stat64i32, taking
 * struct _stat64i32*) over mingw's native stat, causing an incompatible-pointer
 * error against `struct stat stat_buffer`. MSVC keeps HAVE__STAT. */
#ifdef __MINGW32__
#define HAVE_STAT 1
#else
#define HAVE__STAT
#endif

#endif /* __LIBXSLT_WIN32_CONFIG__ */

