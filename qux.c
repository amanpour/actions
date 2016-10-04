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

uint_t qux( uint_t input )
{
    int retval = FAILURE;

    switch( input )
    {
    case 7:
        printf( "37 * 15 = %d\n", multiple( 37, 15 ) );
        retval = SUCCESS;
        break;
    case 8:
        retval = print_msg( 4 );
        break;
    case 9:
        random();
        retval = SUCCESS;
        break;
    default:
        printf( "Invalid input for function qux!\n" );
        break;
    }

    return retval;
}

