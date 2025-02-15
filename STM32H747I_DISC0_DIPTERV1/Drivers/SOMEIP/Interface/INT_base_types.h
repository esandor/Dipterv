// Include guard starts here
#ifndef INT_BASE_TYPES_H_
#define INT_BASE_TYPES_H_

/**
 * @file    INT_basic_types.h
 * @author  Erdei Sándor (sandorerdei21@gmail.com)
 * @date    2025.02.15
 * @brief   "Provides basic SOME/IP types according to official specification.
 *           AUTOSAR specification: https://www.autosar.org/fileadmin/standards/R22-11/FO/AUTOSAR_PRS_SOMEIPProtocol.pdf"
 */

/* **************************************************** */
/*                      Includes                        */
/* **************************************************** */

#include "INT_primitive_types.h"

/* **************************************************** */
/*                       Defines                        */
/* **************************************************** */

/** 
 * Specification does not fix string length.
 * Memory constraint application requires short names.
 */
#define MAX_STRING_SIZE             (30u)

/**
 * [PRS_SOMEIP_00051] The Protocol Version shall be 1. (RS_SOMEIP_00027, RS_SOMEIP_00041)
 * Refer to the specification.
 */
#define PROTOCOL_VERSION_VALUE      (1u)

/* **************************************************** */
/*                  Type definitions                    */
/* **************************************************** */

//  Header field type definitions

/**
 * For distinguishing services.
 */
typedef uint16 Service_ID;

/**
 * For distinguishing service elements (namely methods and/or events).
 * Method range: 0x0000 .. 0x7FFF (first bit of Method-ID is 0)
 * Event range:  0x8000 .. 0x8FFF (first bit of Method-ID is 1)
 */
typedef sint16 Method_ID;

/**
 * First field of header layout.
 * Contains Service_ID and Method_ID.
 * @note Message_ID is considered unique for the whole system!
 */
typedef union 
{
    struct
    {
        Service_ID service_ID;   // LSB
        Method_ID method_ID;
    }B;
    uint32 message_ID;
} uMessage_ID;

/**
 * Length field shall contain the length in Byte
 * starting from Request_ID until the end of the SOME/IP message.
 */
typedef uint32 Length;

/**
 * Unique identifier for the calling client inside the ECU. The Client ID allows
 * an ECU to differentiate calls from multiple clients to the same method.
 */
typedef union 
{
    struct 
    {
        uint8 client_ID_prefix;
        uint8 client_ID_LSB;
    } B;
    uint16 client_ID;
} uClient_ID;


/**
 * Unique identifier that allows to distinguish sequential messages or requests
 * originating from the same sender from each other.
 */
typedef uint16 Session_ID;

/**
 * Allows an endpoint to differentiate multiple parallel uses of the
 * same method, getter or setter. In AUTOSAR the Request ID shall be constructed of the
 * Client ID and Session ID.
 * 
 * @note Unique for a request-response pair to differentiate between multiple calls of the same method.
 */
typedef struct 
{
    uClient_ID client_ID;     // LSB
    Session_ID session_ID;
} sRequest_ID;

/**
 * [PRS_SOMEIP_00051] The Protocol Version shall be 1. (RS_SOMEIP_00027, RS_SOMEIP_00041)
 * Refer to the specification.
 */
typedef uint8 Protocol_version;

/**
 * contains the Major Version of the Service Interface.
 */
typedef uint8 Interface_version;

/**
 * The 3rd highest bit of the Message Type (=0x20) shall be called TP-Flag
 * and shall be set to 1 to signal that the current SOME/IP message is a segment. 
 */
typedef enum 
{
    eMessage_type_REQUEST           = (uint8)0x00u,
    eMessage_type_REQUEST_NO_RETURN = (uint8)0x01u,
    eMessage_type_RESPONSE          = (uint8)0x02u,
    eMessage_type_ERROR             = (uint8)0x20u,
    eMessage_type_TP_REQUEST        = (uint8)0x21u,
    eMessage_type_TP_NOTIFICATION   = (uint8)0x22u,
    eMessage_type_TP_RESPONSE       = (uint8)0xA0u,
    eMessage_type_TP_ERROR          = (uint8)0xA1u
} eMessage_type_t;

/**
 * Specification part 4.2.6.1: [PRS_SOMEIP_00191]
 * 0x10 .. 0x1f: Reserved for generic SOME/IP errors. These errors will be specified in future versions of the official specification document.
 * 0x20 .. 0x5E: Reserved for specific errors of services and methods. These errors are specified by the interface specification.
 */
typedef enum 
{
    eReturn_code_E_OK                        = (uint8)0x00u,
    eReturn_code_E_NOT_OK                    = (uint8)0x01u,
    eReturn_code_E_UNKNOWN_SERVICE           = (uint8)0x02u,
    eReturn_code_E_UNKNOWN_METHOD            = (uint8)0x03u,
    eReturn_code_E_NOT_READY                 = (uint8)0x04u,
    eReturn_code_E_NOT_REACHABLE             = (uint8)0x05u,
    eReturn_code_E_TIMEOUT                   = (uint8)0x06u,
    eReturn_code_E_WRONG_PROTOCOL_VERSION    = (uint8)0x07u,
    eReturn_code_E_WRONG_INTERFACE_VERSION   = (uint8)0x08u,
    eReturn_code_E_MALFORMED_MESSAGE         = (uint8)0x09u,
    eReturn_code_E_WRONG_MESSAGE_TYPE        = (uint8)0x0Au,
    eReturn_code_E_E2E_REPEATED              = (uint8)0x0Bu,
    eReturn_code_E_E2E_WRONG_SEQUENCE        = (uint8)0x0Cu,
    eReturn_code_E_E2E                       = (uint8)0x0Du,
    eReturn_code_E_E2E_NOT_AVAILABLE         = (uint8)0x0Eu,
    eReturn_code_E_E2E_NO_NEW_DATA           = (uint8)0x0Fu

} eReturn_code_t;

/**
 * Identification number for a specific service element.
 */
typedef uint16 Instance_number;

/**
 * Used for data validity and expiration.
 */
typedef uint32 Time_to_live;

// UNEXPLAINED TYPES
typedef uint16 eventgroup_t;
typedef uint8 major_version_t;
typedef uint32 minor_version_t;
typedef uint16 diagnosis_t;

// Addresses

typedef union
{
    uint8 byte[4];
    uint32 word;
    
} IPv4_address;

typedef union
{
    uint8 byte[16];
    uint32 word[4];
    
} IPv6_address;

typedef uint16 Port;

typedef unsigned char trace_channel_t[MAX_STRING_SIZE];

typedef unsigned char trace_filter_type_t[MAX_STRING_SIZE];

typedef uint32 pending_remote_offer_id_t;

typedef uint32 pending_security_update_id_t;

/* **************************************************** */
/*               Function declarations                  */
/* **************************************************** */

// Include guard stops here
#endif // INT_BASE_TYPES_H_