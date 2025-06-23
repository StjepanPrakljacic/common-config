/******************************************************************************
 * @file Std_Types.h
 * @brief Header file for common-config types and macros.
 *
 * Provides standard types, return codes, boolean definitions, and generic
 * error enum used across the common-config.
 *****************************************************************************/

#ifndef STD_TYPES_H
#define STD_TYPES_H

/******************************************************************************
 * Includes
 *****************************************************************************/

#include <stdint.h>  /* for standard integer types */

/**
 * @brief Standard return type for functions.
 * @details Used to represent the status of a function call,
 *          typically with values E_OK or E_NOT_OK.
 */
typedef uint8_t Std_ReturnType;

/**
 * @brief Boolean type definition.
 * @details Defines a boolean type as an unsigned 8-bit integer.
 */
#ifndef BOOL
typedef uint8_t BOOL;
#endif

/**
 * @brief Boolean TRUE value.
 * @details Represents the boolean true state, defined as 1.
 */
#ifndef TRUE
#define TRUE  ((BOOL)1u)
#endif

/**
 * @brief Boolean FALSE value.
 * @details Represents the boolean false state, defined as 0.
 */
#ifndef FALSE
#define FALSE ((BOOL)0u)
#endif

/******************************************************************************
 * Macros
 *****************************************************************************/

/**
 * @brief Standard success return value.
 * @details Indicates successful completion of a function.
 */
#ifndef E_OK
#define E_OK       ((Std_ReturnType)0u)
#endif

/**
 * @brief Standard failure return value.
 * @details Indicates failure of a function.
 */
#ifndef E_NOT_OK
#define E_NOT_OK   ((Std_ReturnType)1u)
#endif

/******************************************************************************
 * Enumerations
 *****************************************************************************/

/**
 * @brief Generic error codes.
 */
typedef enum {
    ERROR_NONE = 0,         /**< No error */
    ERROR_TIMEOUT,          /**< Operation timed out */
    ERROR_OVERFLOW,         /**< Overflow error */
    ERROR_UNDERFLOW,        /**< Underflow error */
    ERROR_INVALID_PARAM,    /**< Invalid parameter */
    ERROR_UNKNOWN           /**< Unknown error */
} ErrorType;

/******************************************************************************
 * Structures
 *****************************************************************************/

/* No structures currently defined */

/******************************************************************************
 * Function Prototypes
 *****************************************************************************/

/* No function prototypes currently defined */

/******************************************************************************
 * Global Variables
 *****************************************************************************/

/* No global variables currently defined */

/******************************************************************************
 * Constants
 *****************************************************************************/

/* No additional constants currently defined */

#endif /* STD_TYPES_H */
