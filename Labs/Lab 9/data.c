# include <stdio.h>
# include <stdlib.h>
# include <assert.h>

#include "data.h"

void print_data(Data *d) {
	print_process(d);
	return;
}

void destroy_data(Data **d) {
	destroy_process(d);
	return;
}

Data* copy_data(Data *d) {
	return copy_process(d);
}

void swap_data(Data *d1, Data *d2) {
	Data temp = *d1;
	*d1 = *d2;
	*d2 = temp;
	return;
}

void print_data_array(Data *array, const int size) {
	assert(array);
	assert(size >= 1);

	int i;
	printf("[");
	for (i = 0; i < size; i++) {
		print_data(&array[i]);
		if (i != size - 1)
			printf(",");
	}
	printf("]\n");
	return;
}

//time then arrival then PID
int compare_data(Data *d1, Data *d2) {
	assert(d1!= NULL && d2!=NULL);
	if (d1->arrival > d2->arrival)
		return 1; //d1 > d2
	if (d1->arrival < d2->arrival)
		return 2; //d1 < d2
	if (d1->time > d2->time)
		return 1; //d1 > d2
	if (d1->time < d2->time)
		return 2; //d1 < d2
	if (d1->PID > d2->PID)
		return 1; //d1 > d2
	if (d1->PID < d2->PID)
		return 2; //d1 < d2
	return 0; //d1 == d2
}
