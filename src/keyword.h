/*************************************************************************
	> File Name: keyword.h
	> Author: answer
	> Mail: yuanweijie1993@gmail.com
	> Created Time: Wed 18 Nov 2020 06:01:23 PM CST
 ************************************************************************/

#ifndef __KEYWORD__H
#define __KEYWORD__H

#ifdef __cplusplus
extern "C" {
#endif

/* GCC (version >= 2.96) support, meet here by default */
#ifdef __GNUC__
#define LIKELY(x)       (__builtin_expect(!!(x), 1))
#define UNLIKELY(x)     (__builtin_expect(!!(x), 0))
#else
#define LIKELY(x)       (x)
#define UNLIKELY(x)     (x)
#endif

#ifdef __cplusplus
}
#endif

#endif
