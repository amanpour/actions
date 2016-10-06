/*
 * qux.c
 *
 *  Created on: 30.09.2016
 *      Author: aamanpour
 */

#include <stdio.h>

#include "defs.h"
#include "qux.h"
#include "operations.h"

#define ARRAY_SIZE  10


uint_t qux( uint_t input )
{
    uint_t retval = FAILURE;
	uint_t array[ ARRAY_SIZE ];

    switch( input )
    {
    case 7U:
        printf( "37 * 15 = %d\n", multiple( 37, 15 ) );
        retval = SUCCESS;
        break;
    case 8U:
        init_array( array, ARRAY_SIZE );
        retval = SUCCESS;
       break;
    case 9U:
        retval = fill_array( array, ARRAY_SIZE );
        break;
    default:
        printf( "Invalid input for function qux!\n" );
        break;
    }

    return retval;
}

