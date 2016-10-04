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

    while( 1 )
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
            case 1:
            case 2:
            case 3:
                printf( "Group A\n" );
                if( SUCCESS != foo( selection ) )
                {
                    printf( "foo function failed!\n" );
                }
                break;
            case 4:
            case 5:
            case 6:
                printf( "Group B\n" );
                if( SUCCESS != bar( selection ) )
                {
                    printf( "bar function failed!\n" );
                }
                break;
            case 7:
            case 8:
            case 9:
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
