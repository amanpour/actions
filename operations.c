/*
 * operations.c
 *
 *  Created on: 30.09.2016
 *      Author: aamanpour
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "defs.h"

#define MESSAGE_COUNT   5U

static const char_t* const msg[] =
{
    "Message1:",
    "Message2:",
    "Message3:",
    "Message4:",
    "Message5:"
};

uint_t print_msg( uint_t msg_num )
{
    uint_t retval = FAILURE;

    if( ( msg_num > 0 ) && ( msg_num <= MESSAGE_COUNT ) )
    {
        printf( "%s\n", msg[ msg_num ] );

        retval = SUCCESS;
    }
    else
    {
        printf( "Invalid message number!\n" );

        retval = FAILURE;
    }

    return retval;
}

uint_t sum( uint_t a, uint_t b )
{
    uint_t result = 0;

    result = a + b;

    return result;
}

uint_t multiple( uint_t a, uint_t b )
{
    uint_t result = 0;

    result = a * b;

    return result;
}

void random( void )
{
    uint_t rand_num = 0;

    srand( time( NULL ) );
    rand_num = rand() % 100;

    printf( "Generated random number: %d\n", rand_num );
}

