#ifndef DATA_H_
#define DATA_H_

#include "process.h"

typedef Process Data;

void print_data(Data *d);
void print_data_array(Data *array, const int size);
void swap_data(Data *d1, Data *d2);
Data* copy_data(Data *d);
int compare_data(Data *d1, Data *d2);
void destroy_data(Data**);

#endif /* DATA_H_ */
