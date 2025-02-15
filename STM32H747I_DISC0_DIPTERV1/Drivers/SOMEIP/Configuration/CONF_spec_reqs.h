// Include guard starts here
#ifndef CONF_SPEC_SEQS_H_
#define CONF_SPEC_SEQS_H_

/**
 * @file    CONF_spec_seqs.h
 * @author  Erdei Sándor (sandorerdei21@gmail.com)
 * @date    2025.02.15
 * @brief   "Provides constants fixed by official specification.
 *          AUTOSAR specification: https://www.autosar.org/fileadmin/standards/R22-11/FO/AUTOSAR_PRS_SOMEIPProtocol.pdf"
 */

/* **************************************************** */
/*                      Includes                        */
/* **************************************************** */

/* **************************************************** */
/*                       Defines                        */
/* **************************************************** */

/**
 * [PRS_SOMEIP_00368] dAll SOME/IP Header Fields shall be encoded in network byte order (big endian).
 */
#define SPECSEQS_HEADER_BIGENDIAN       (1u)
#define SPECSEQS_HEADER_LITTLEENDIAN    (0u)

/* **************************************************** */
/*                  Type definitions                    */
/* **************************************************** */

/* **************************************************** */
/*               Function declarations                  */
/* **************************************************** */

// Include guard stops here
#endif // CONF_SPEC_SEQS_H_