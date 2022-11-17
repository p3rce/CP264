/**
 -------------------------
 CP264 (Spring 2022)
 Assignment: A3
 Header File
 -------------------------
 **/

#ifndef A3_H_
#define A3_H_

# define MAX_ARRAY_SIZE 10
# define RESERVED_VALUE -6732

int find_index_array(int*, const int, int);
int find_max_index(int*, const int);
short get_array_size(short*, short*);
int* find_mode(int*, const int);
void update_pointer(double*, const int, double, double**);
void find_next(int*, int*, const int, int**);

#endif /* A3_H_ */
