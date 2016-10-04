/*
 * bar.c
 *
 *  Created on: 30.09.2016
 *      Author: aamanpour
 */

#include <stdio.h>

#include "defs.h"
#include "bar.h"
#include "operations.h"

uint_t bar( uint_t input )
{
    int retval = FAILURE;

    switch( input )
    {
    case 4:
        random();
        retval = SUCCESS;
        break;
    case 5:
        printf( "27 + 12 = %d\n", sum( 27, 12 ) );
        retval = SUCCESS;
        break;
    case 6:
        retval = print_msg( input );
        break;
    default:
        printf( "Invalid input for function bar!\n" );
        break;
    }

    return retval;
}


