/*************************************************************************
	> File Name: type.h
	> Author: answer
	> Mail: yuanweijie1993@gmail.com
	> Created Time: Wed 18 Nov 2020 05:35:05 PM CST
 ************************************************************************/

#ifndef __TYPE__H
#define __TYPE__H

#ifdef __cplusplus
extern "C" {
#endif

typedef void 					VOID;
typedef signed char 			S8;
typedef unsigned char 			U8;
typedef unsigned char  			BOOL;
typedef signed short 			S16;
typedef unsigned short 			U16;
typedef signed int 				S32;
typedef unsigned int 			U32;
typedef signed long long 		S64;
typedef unsigned long long		U64;
typedef float             		FLOAT;
typedef double            		DOUBLE;

/* NULL */
#ifdef NULL
#undef NULL
#endif
#ifdef __cplusplus
	#define NULL		(0)
#else
	#define NULL		((VOID *)0)
#endif

#ifdef __cplusplus
}
#endif

#endif
