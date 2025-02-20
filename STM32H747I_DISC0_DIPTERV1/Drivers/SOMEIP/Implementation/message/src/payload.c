/**
 * @file    payload.c
 * @author  Erdei Sándor (sandorerdei21@gmail.com)
 * @date    2025.02.20
 * @brief   ""
 */

/* **************************************************** */
/*                      Includes                        */
/* **************************************************** */

#include "payload.h"

/* **************************************************** */
/*                       Defines                        */
/* **************************************************** */

/* **************************************************** */
/*               Static global variables                */
/* **************************************************** */

/* **************************************************** */
/*                True global variables                 */
/* **************************************************** */

/* **************************************************** */
/*                Local type definitions                */
/* **************************************************** */

/* **************************************************** */
/*             Local function declarations              */
/* **************************************************** */

/* **************************************************** */
/*             Global function definitions              */
/* **************************************************** */

boolean set_someip_data(s_someip_data *payload, au8_someip_data *_data, u8_someip_data_length _length)
{
    uint8 i = 0u;

    if ((NULL == _data) || (PAY_MAX_PAYLOAD_SIZE < _length))
    {
        return FALSE;
    }

    for (i = 0u; i < _length; i++)
    {
        payload->data[i] = _data[i];
    }
    payload->length = _length;

    return TRUE;
}

void delete_someip_data(s_someip_data *payload)
{
    payload->length = 0u;
}

/* **************************************************** */
/*             Local function definitions               */
/* **************************************************** */

/* END OF PAYLOAD.C FILE */
