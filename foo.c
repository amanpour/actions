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
    int retval = FAILURE;

    switch( input )
    {
    case 1:
        retval = print_msg( input );
        break;
    case 2:
        printf( "10 + 13 = %d\n", sum( 10, 13 ) );
        retval = SUCCESS;
        break;
    case 3:
        printf( "7 * 41 = %d\n", multiple( 7, 41 ) );
        retval = SUCCESS;
        break;
    default:
        printf( "Invalid input for function foo!\n" );
        break;
    }

    return retval;
}
