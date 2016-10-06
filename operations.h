/*
 * operations.h
 *
 *  Created on: 30.09.2016
 *      Author: aamanpour
 */

#ifndef OPERATIONS_H_
#define OPERATIONS_H_

void init_rand_gen( void );
void create_array( void );
uint_t print_msg( uint_t msg_num );
uint_t sum( uint_t a, uint_t b );
uint_t multiple( uint_t a, uint_t b );
void random( void );
void init_array( uint_t array[], uint_t size );
uint_t fill_array_glob( void );
uint_t fill_array( uint_t* array, uint_t arr_size );

#endif /* OPERATIONS_H_ */
