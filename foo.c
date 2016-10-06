/*
 * foo.c
 *
 *  Created on: 30.09.2016
 *      Author: aamanpour
 */

#include <stdio.h>

#include "defs.h"
#include "foo.h"
#include "operations.h"


uint_t foo( uint_t input )
{
    uint_t retval = FAILURE;

    switch( input )
    {
    case 1U:
        retval = print_msg( input );
        break;
    case 2U:
        printf( "10 + 13 = %d\n", sum( 10, 13 ) );
        retval = SUCCESS;
        break;
    case 3U:
//        printf( "7 * 41 = %d\n", multiple( 7, 41 ) );
//        retval = SUCCESS;
        retval = fill_array_glob();
        break;
    default:
        printf( "Invalid input for function foo!\n" );
        break;
    }

    return retval;
}
