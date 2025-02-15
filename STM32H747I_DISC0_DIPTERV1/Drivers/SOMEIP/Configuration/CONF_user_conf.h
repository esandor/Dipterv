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
#define PAYLOAD_BIGENDIAN                   TRUE
#define PAYLOAD_LITTLEENDIAN                FALSE

/**
 * Communication protocol type selection
 */
#define COMMPROT_TYPE_UDP                   TRUE
#define COMMPROT_TYPE_TCP                   FALSE   /* Not recommended to use */

/**
 * E2E communication protection
 */
#define ENABLE_E2E_PROTECTION               FALSE

/**
 * Enable to have major and minor interface version numbers.
 */
#define INTERFACE_SUBVERSIONS               FALSE

/* **************************************************** */
/*                  Type definitions                    */
/* **************************************************** */

/* **************************************************** */
/*               Function declarations                  */
/* **************************************************** */

// Include guard stops here
#endif // CONF_USER_CONF_H_