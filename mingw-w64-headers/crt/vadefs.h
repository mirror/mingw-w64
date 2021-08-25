/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#ifndef _INC_VADEFS
#define _INC_VADEFS

#include <_mingw.h>

#ifndef __WIDL__
#undef _CRT_PACKING
#define _CRT_PACKING 8
#pragma pack(push,_CRT_PACKING)
#endif

#ifdef __cplusplus
extern "C" {
#endif

#if defined (__GNUC__)
#ifndef __GNUC_VA_LIST
#define __GNUC_VA_LIST
  typedef __builtin_va_list __gnuc_va_list;
#endif
#endif /* __GNUC__ */

#ifndef _VA_LIST_DEFINED	/* if stdargs.h didn't define it */
#define _VA_LIST_DEFINED
#if defined(__GNUC__)
  typedef __gnuc_va_list va_list;
#elif defined(_MSC_VER)
  typedef char *  va_list;
#elif !defined(__WIDL__)
#error VARARGS not implemented for this compiler
#endif
#endif /* _VA_LIST_DEFINED */

#ifdef __cplusplus
#define _ADDRESSOF(_V) (&reinterpret_cast<const char &>(_V))
#else
#define _ADDRESSOF(_V) (&(_V))
#endif

#if defined (__GNUC__)
/* Use GCC builtins */

#define _crt_va_start(_V,_L)	__builtin_va_start(_V,_L)
#define _crt_va_arg(_V,_L)	__builtin_va_arg(_V,_L)
#define _crt_va_end(_V)		__builtin_va_end(_V)
#define _crt_va_copy(_D,_S)	__builtin_va_copy(_D,_S)

#elif defined(_MSC_VER)
/* MSVC specific */

#if defined(_M_IA64)
#define _VA_ALIGN 8
#define _SLOTSIZEOF(_T) ((sizeof(_T) + _VA_ALIGN - 1) & ~(_VA_ALIGN - 1))
#define _VA_STRUCT_ALIGN 16
#define _ALIGNOF(_Ap) ((((_Ap)+_VA_STRUCT_ALIGN - 1) & ~(_VA_STRUCT_ALIGN -1)) - (_Ap))
#define _APALIGN(_T,_Ap) (__alignof(_T) > 8 ? _ALIGNOF((uintptr_t) _Ap) : 0)
#else
#define _SLOTSIZEOF(_T) (sizeof(_T))
#define _APALIGN(_T,_Ap) (__alignof(_T))
#endif

#if defined(_M_IX86)

#define _INTSIZEOF(_N) ((sizeof(_N) + sizeof(int) - 1) & ~(sizeof(int) - 1))
#define _crt_va_start(_V,_L)	((_V) = (va_list)_ADDRESSOF(_L) + _INTSIZEOF(_L))
#define _crt_va_arg(_V,_L)	(*(_L *)(((_V) += _INTSIZEOF(_L)) - _INTSIZEOF(_L)))
#define _crt_va_end(_V)		((_V) = (va_list)0)
#define _crt_va_copy(_D,_S)	((_D) = (_S))

#elif defined(_M_AMD64)

#define _PTRSIZEOF(_N) ((sizeof(_N) + sizeof(void*) - 1) & ~(sizeof(void*) - 1))
#define _ISSTRUCT(_T)  ((sizeof(_T) > sizeof(void*)) || (sizeof(_T) & (sizeof(_T) - 1)) != 0)
#define _crt_va_start(_V,_L)	((_V) = (va_list)_ADDRESSOF(_L) + _PTRSIZEOF(_L))
#define _crt_va_arg(_V,_T)	_ISSTRUCT(_T) ?						\
				 (**(_T**)(((_V) += sizeof(void*)) - sizeof(void*))) :	\
				 ( *(_T *)(((_V) += sizeof(void*)) - sizeof(void*)))
#define _crt_va_end(_V)		((_V) = (va_list)0)
#define _crt_va_copy(_D,_S)	((_D) = (_S))

#elif defined(_M_IA64)

#error VARARGS not implemented for IA64

#else

#error VARARGS not implemented for this TARGET

#endif /* cpu ifdefs */

#endif /* compiler ifdefs */

#ifdef __cplusplus
}
#endif

#ifndef __WIDL__
#pragma pack(pop)
#endif

#endif /* _INC_VADEFS */
