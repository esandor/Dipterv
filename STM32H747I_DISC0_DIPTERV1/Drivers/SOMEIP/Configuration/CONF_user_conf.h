// Include guard starts here
#ifndef CONF_USER_CONF_H_
#define CONF_USER_CONF_H_

/**
 * @file    CONF_user_conf.h
 * @author  Erdei Sándor (sandorerdei21@gmail.com)
 * @date    2025.02.15
 * @brief   "Configurations set by user"
 */

/* **************************************************** */
/*                      Includes                        */
/* **************************************************** */

/* **************************************************** */
/*                       Defines                        */
/* **************************************************** */

/**
 * [PRS_SOMEIP_00369] The byte order of the parameters inside the payload shall be defined by configuration.
 */
#define SPECSEQS_PAYLOAD_BIGENDIAN       (1u)
#define SPECSEQS_PAYLOAD_LITTLEENDIAN    (0u)

/* **************************************************** */
/*                  Type definitions                    */
/* **************************************************** */

/* **************************************************** */
/*               Function declarations                  */
/* **************************************************** */

// Include guard stops here
#endif // CONF_USER_CONF_H_