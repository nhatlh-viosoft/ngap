/* Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#ifndef __CORE_H__
#define __CORE_H__

/* GENERATED FILE WARNING!  DO NOT EDIT core.h
 *
 * You must modify core.h.in instead.
 *
 * And please, make an effort to stub core.hw and core.hnw in the process.
 */

#if !defined(__GNUC__) || __GNUC__ < 2 || \
    (__GNUC__ == 2 && __GNUC_MINOR__ < 7) ||\
    defined(NEXT)
#ifndef __attribute__
#define __attribute__(__x)
#endif
#define CORE_INLINE
#else
#define CORE_INLINE __inline__
#endif

#include <stdlib.h>
#include <string.h>

/**
 * @file core.h
 * @brief CORE Platform Definitions
 */

/**
 * @defgroup CORE Core Runtime library
 * @{
 */


/* Typedefs that CORE needs. */

typedef  char                   c_int8_t;
typedef  unsigned char          c_uint8_t;

typedef  short          c_int16_t;
typedef  unsigned short c_uint16_t;

typedef  int            c_int32_t;
typedef  unsigned int   c_uint32_t;

typedef  long           c_int64_t;
typedef  unsigned long  c_uint64_t;

#define c_max(x , y)  (((x) > (y)) ? (x) : (y))
#define c_min(x , y)  (((x) < (y)) ? (x) : (y))

#if SIZEOF_VOIDP == 8
typedef  c_uint64_t            	c_uintptr_t;
typedef  c_int64_t             	c_intptr_t;
#else
typedef  c_uint32_t            	c_uintptr_t;
typedef  c_int32_t             	c_intptr_t;
#endif

/* Mechanisms to properly type numeric literals */
#define C_INT64_C(val) (val##L)
#define C_UINT64_C(val) (val##UL)

#define C_INT64_T_FMT "ld"
#define C_UINT64_T_FMT "lu"
#define C_UINT64_T_HEX_FMT "lx"

#define C_PID_T_FMT "d"

#ifdef INT16_MIN
#define C_INT16_MIN   INT16_MIN
#else
#define C_INT16_MIN   (-0x7fff - 1)
#endif

#ifdef INT16_MAX
#define C_INT16_MAX  INT16_MAX
#else
#define C_INT16_MAX   (0x7fff)
#endif

#ifdef UINT16_MAX
#define C_UINT16_MAX  UINT16_MAX
#else
#define C_UINT16_MAX  (0xffff)
#endif

#ifdef INT32_MIN
#define C_INT32_MIN   INT32_MIN
#else
#define C_INT32_MIN   (-0x7fffffff - 1)
#endif

#ifdef INT32_MAX
#define C_INT32_MAX  INT32_MAX
#else
#define C_INT32_MAX  0x7fffffff
#endif

#ifdef UINT32_MAX
#define C_UINT32_MAX  UINT32_MAX
#else
#define C_UINT32_MAX  (0xffffffffU)
#endif

#ifdef INT64_MIN
#define C_INT64_MIN   INT64_MIN
#else
#define C_INT64_MIN   (C_INT64_C(-0x7fffffffffffffff) - 1)
#endif

#ifdef INT64_MAX
#define C_INT64_MAX   INT64_MAX
#else
#define C_INT64_MAX   C_INT64_C(0x7fffffffffffffff)
#endif

#ifdef UINT64_MAX
#define C_UINT64_MAX  UINT64_MAX
#else
#define C_UINT64_MAX  C_UINT64_C(0xffffffffffffffff)
#endif

/* Definitions that CORE programs need to work properly. */

/** 
 * Thread callbacks from CORE functions must be declared with THREAD_FUNC, 
 * so that they follow the platform's calling convention.
 * <PRE>
 *
 * void* THREAD_FUNC my_thread_entry_fn(thread_id id, void *data);
 *
 * </PRE>
 */
#define THREAD_FUNC

/**
 * The public CORE functions are declared with CORE_DECLARE(), so they may
 * use the most appropriate calling convention.  Public CORE functions with 
 * variable arguments must use CORE_DECLARE_NONSTD().
 *
 * @remark Both the declaration and implementations must use the same macro.
 *
 * <PRE>
 * CORE_DECLARE(rettype) core_func(args)
 * </PRE>
 * @see CORE_DECLARE_NONSTD @see CORE_DECLARE_DATA
 * @remark Note that when CORE compiles the library itself, it passes the 
 * symbol -DCORE_DECLARE_EXPORT to the compiler on some platforms (e.g. Win32) 
 * to export public symbols from the dynamic library build.\n
 * The user must define the CORE_DECLARE_STATIC when compiling to target
 * the static CORE library on some platforms (e.g. Win32.)  The public symbols 
 * are neither exported nor imported when CORE_DECLARE_STATIC is defined.\n
 * By default, compiling an application and including the CORE public
 * headers, without defining CORE_DECLARE_STATIC, will prepare the code to be
 * linked to the dynamic library.
 */
#define CORE_DECLARE(type)            type 

/**
 * The public CORE functions using variable arguments are declared with 
 * CORE_DECLARE_NONSTD(), as they must follow the C language calling convention.
 * @see CORE_DECLARE @see CORE_DECLARE_DATA
 * @remark Both the declaration and implementations must use the same macro.
 * <PRE>
 *
 * CORE_DECLARE_NONSTD(rettype) core_func(args, ...);
 *
 * </PRE>
 */
#define CORE_DECLARE_NONSTD(type)     type

/**
 * The public CORE variables are declared with CORE_DECLARE_DATA.
 * This assures the appropriate indirection is invoked at compile time.
 * @see CORE_DECLARE @see CORE_DECLARE_NONSTD
 * @remark Note that the declaration and implementations use different forms,
 * but both must include the macro.
 * 
 * <PRE>
 *
 * extern CORE_DECLARE_DATA type core_variable;\n
 * CORE_DECLARE_DATA type core_variable = value;
 *
 * </PRE>
 */
#define CORE_DECLARE_DATA

// #if defined(PATH_MAX)
// #define C_PATH_MAX       PATH_MAX
// #elif defined(_POSIX_PATH_MAX)
// #define C_PATH_MAX       _POSIX_PATH_MAX
// #else
// #error no decision has been made on C_PATH_MAX for your platform
// #endif

/** @} */

/* Definitions that only Win32 programs need to compile properly. */

#if WORDS_BIGENDIAN
#define ED2(x1, x2) x1 x2
#define ED3(x1, x2, x3) x1 x2 x3
#define ED4(x1, x2, x3, x4) x1 x2 x3 x4
#define ED5(x1, x2, x3, x4, x5) x1 x2 x3 x4 x5
#define ED6(x1, x2, x3, x4, x5, x6) x1 x2 x3 x4 x5 x6
#define ED7(x1, x2, x3, x4, x5, x6, x7) x1 x2 x3 x4 x5 x6 x7
#define ED8(x1, x2, x3, x4, x5, x6, x7, x8) x1 x2 x3 x4 x5 x6 x7 x8
#else
#define ED2(x1, x2) x2 x1
#define ED3(x1, x2, x3) x3 x2 x1
#define ED4(x1, x2, x3, x4) x4 x3 x2 x1
#define ED5(x1, x2, x3, x4, x5) x5 x4 x3 x2 x1
#define ED6(x1, x2, x3, x4, x5, x6) x6 x5 x4 x3 x2 x1
#define ED7(x1, x2, x3, x4, x5, x6, x7) x7 x6 x5 x4 x3 x2 x1
#define ED8(x1, x2, x3, x4, x5, x6, x7, x8) x8 x7 x6 x5 x4 x3 x2 x1
#endif

/** FALSE */
#ifndef FALSE
#define FALSE 0
#endif
/** TRUE */
#ifndef TRUE
#define TRUE (!FALSE)
#endif

/* CORE_ALIGN() is only to be used to align on a power of 2 boundary */
#define CORE_ALIGN(size, boundary) \
        (((size) + ((boundary) - 1)) & ~((boundary) - 1))

/** Default alignment */
#define CORE_ALIGN_DEFAULT(size) CORE_ALIGN(size, 4)

#ifdef __cplusplus
}
#endif

#endif /* CORE_H */
