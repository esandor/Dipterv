// Include guard starts here
#ifndef INT_PRIMITIVE_TYPES_H_
#define INT_PRIMITIVE_TYPES_H_

/**
 * @file    INT_primitive_types.h
 * @author  Erdei Sándor (sandorerdei21@gmail.com)
 * @date    2025.02.15
 * @brief   "Provides supported, primitive type typenames"
 */

/* **************************************************** */
/*                      Includes                        */
/* **************************************************** */

/* **************************************************** */
/*                       Defines                        */
/* **************************************************** */

#define TRUE            (1u)
#define FALSE           (0u)

/* **************************************************** */
/*                  Type definitions                    */
/* **************************************************** */

/* Shortest natively supported type */
typedef unsigned char           boolean;

/* 8bit unsigned: 0 .. 255 (0x00 .. 0xFF) */
typedef unsigned char           uint8;

/* 16bit unsigned: 0 .. 65535 (0x0000 .. 0xFFFF) */
typedef unsigned short          uint16;

/* 32bit unsigned: 0 .. 4294967295 (0x00000000 .. 0xFFFFFFFF) */
typedef unsigned long           uint32;

/* 64bit unsigned: 0 .. 18446744073709551615 (0x0000000000000000 .. 0xFFFFFFFFFFFFFFFF) */
typedef unsigned long long      uint64;

/* 8bit signed, 7bit + 1bit sign: -128 .. +127 (0x80 .. 0x7F) */
typedef signed char             sint8;

/* 16bit signed, 15bit + 1bit sign: -32768 .. +32767 (0x8000 .. 0x7FFF) */
typedef short                   sint16;

/* 32bit signed, 31bit + 1bit sign: -2147483648 .. +2147483647 (0x80000000 .. 0x7FFFFFFF) */
typedef long                    sint32;

/* 64bit signed, 63bit + 1bit sign: -9223372036854775808 .. +9223372036854775807 (0x8000000000000000 .. 0x7FFFFFFFFFFFFFFF) */
typedef long long               sint64;

/* IEEE754-2008 single precision: -3.4028235e+38 .. +3.4028235e+38 */
typedef float                   float32;

/* IEEE754-2008 souble precision: -1.7976931348623157+308 .. +1.7976931348623157e+308 */
typedef double                  float64;

/* **************************************************** */
/*               Function declarations                  */
/* **************************************************** */

// Include guard stops here
#endif // INT_PRIMITIVE_TYPES_H_