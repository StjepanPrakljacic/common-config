/******************************************************************************
 * @file Std_Utils.h
 * @brief Header file for common utility macros.
 *
 * This file contains utility macros commonly used across the common-config
 * project.
 *****************************************************************************/

#ifndef STD_UTILS_H
#define STD_UTILS_H

/******************************************************************************
 * Includes
 *****************************************************************************/

/* No includes needed currently */

/******************************************************************************
 * Typedefs
 *****************************************************************************/

/* No typedefs currently defined */

/******************************************************************************
 * Macros
 *****************************************************************************/

/**
 * @brief Get the minimum of two values.
 * @details Evaluates to the smaller of the two arguments.
 */
#ifndef MIN
#define MIN(a,b) (((a) < (b)) ? (a) : (b))
#endif

/**
 * @brief Get the maximum of two values.
 * @details Evaluates to the larger of the two arguments.
 */
#ifndef MAX
#define MAX(a,b) (((a) > (b)) ? (a) : (b))
#endif

/**
 * @brief Calculate the number of elements in an array.
 * @details Divides the total size of the array by the size of one element.
 */
#ifndef ARRAY_SIZE
#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))
#endif

/******************************************************************************
 * Enumerations
 *****************************************************************************/

/* No enumerations currently defined */

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
 * Static Functions
 *****************************************************************************/

/* No static functions currently defined */

/******************************************************************************
 * Constants
 *****************************************************************************/

/* No constants currently defined */

#endif // STD_UTILS_H
