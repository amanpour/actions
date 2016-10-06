/*
 * main.c
 *
 *  Created on: 30.09.2016
 *      Author: aamanpour
 */

#include <stdio.h>
#include <stdlib.h>

#include "defs.h"
#include "foo.h"
#include "bar.h"
#include "qux.h"
#include "operations.h"

#define MAX_INPUT_VAL   9
#define MAX_INPUT_LEN   10

int main( void )
{
    char_t input[MAX_INPUT_LEN];
    uint_t selection = 0;

    init_rand_gen();
    create_array();

    while( 1U )
    {
        printf( "\nEnter a number (1-9) or q to quit: " );
        gets( input );

        if( 'q' == input[0] )
        {
            break;
        }
        else
        {
            sscanf( input, "%d", &selection );

            switch( selection )
            {
            case 1U:
            case 2U:
            case 3U:
                printf( "Group A\n" );
                if( SUCCESS != foo( selection ) )
                {
                    printf( "foo function failed!\n" );
                }
                break;
            case 4U:
            case 5U:
            case 6U:
                printf( "Group B\n" );
                if( SUCCESS != bar( selection ) )
                {
                    printf( "bar function failed!\n" );
                }
                break;
            case 7U:
            case 8U:
            case 9U:
                printf( "Group C\n" );
                if( SUCCESS != qux( selection ) )
                {
                    printf( "qux function failed!\n" );
                }
                break;
            default:
                printf( "Invalid input! Try again.\n");
            }
        }
    }

    return 0;
}
