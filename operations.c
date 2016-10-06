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
#define ARRAY_SIZE      4U

static const char_t* const msg[] =
{
    "Message1:",
    "Message2:",
    "Message3:",
    "Message4:",
    "Message5:"
};

static uint_t* g_int_array;

void init_rand_gen( void )
{
    srand( time( NULL ) );
}

void create_array( void )
{
    int indx = 0;
    g_int_array = ( uint_t* ) malloc( ARRAY_SIZE );

    for( indx = 0; indx < ARRAY_SIZE; indx++ )
    {
        g_int_array[ indx ] = indx * indx;
    }
}

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

uint_t random( void )
{
    uint_t rand_num = 0;

    rand_num = rand() % 100;

    printf( "Generated random number: %d\n", rand_num );

    return rand_num;
}

void init_array( uint_t array[], uint_t size )
{
	uint_t i = 0;
	
	for( i = 0; i < size; i++ )
	{
		array[i] = 0U;
	}
	
    printf( "Array has been initialized successfully.\n" );
}

uint_t fill_array_glob( void )
{
    uint_t indx = 0;
    uint_t retval = FAILURE;

    if( g_int_array )
    {
        for( indx = 0; indx < ARRAY_SIZE; indx++ )
        {
            g_int_array[ indx ] = random();
        }

        retval = SUCCESS;
    }

    return retval;
}

uint_t fill_array( uint_t* array, uint_t arr_size )
{
    uint_t indx = 0;
    uint_t retval = FAILURE;

    if( array )
    {
        for( indx = 0; indx < arr_size; indx++ )
        {
            array[ indx ] = random();
        }

        retval = SUCCESS;
    }

    return retval;
}

void mul2( uint_t* arg )
{
    *arg = (*arg) * 2;
}
