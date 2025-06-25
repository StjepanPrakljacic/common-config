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

#include <stdint.h>
#include <stdbool.h>

/******************************************************************************
 * Macros
 *****************************************************************************/
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
#ifndef DT_BOOL
typedef bool DT_BOOL;
#endif

/**
 * @brief Boolean TRUE value.
 * @details Represents the boolean true state, defined as 1.
 */
#ifndef TRUE
#define TRUE  ((DT_BOOL)1u)
#endif

/**
 * @brief Boolean FALSE value.
 * @details Represents the boolean false state, defined as 0.
 */
#ifndef FALSE
#define FALSE ((DT_BOOL)0u)
#endif

/**
 * @brief NULL pointer definition.
 * @details Represents a null pointer constant.
 */
#ifndef NULL_PTR
#define NULL_PTR ((void *)0)
#endif

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
 * Typedefs
 *****************************************************************************/

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

/******************************************************************************
 * Global Variables (extern declarations)
 *****************************************************************************/

/******************************************************************************
 * Constants
 *****************************************************************************/

#endif /* STD_TYPES_H */
