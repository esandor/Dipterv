// Include guard starts here
#ifndef PAYLOAD_H_
#define PAYLOAD_H_

/**
 * @file    payload.h
 * @author  Erdei Sándor (sandorerdei21@gmail.com)
 * @date    2025.02.20
 * @brief   ""
 */

/* **************************************************** */
/*                      Includes                        */
/* **************************************************** */

#include "INT_base_types.h"

/* **************************************************** */
/*                       Defines                        */
/* **************************************************** */

#define PAY_MAX_PAYLOAD_SIZE                (128u) // bytes

/* **************************************************** */
/*                  Type definitions                    */
/* **************************************************** */

typedef uint8 au8_someip_data[PAY_MAX_PAYLOAD_SIZE];
typedef uint8 u8_someip_data_length;

typedef struct
{
    au8_someip_data data;
    u8_someip_data_length length;
} s_someip_data;


/* **************************************************** */
/*               Function declarations                  */
/* **************************************************** */

// Include guard stops here
#endif // PAYLOAD_H_