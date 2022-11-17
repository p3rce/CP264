/**
 -------------------------
 CP264 (Spring 2020)
 Assignment: A3
 Testing File
 -------------------------
 **/
# include <stdio.h>
# include "A3.h"

void print_array(int*, const int);
void print_array_double(double*,const int);

void test_find_index_array();
void test_find_max_index();
void test_get_array_size();
void test_find_mode();
void test_update_pointer();
void test_find_next();

//-------------------------------------------------------------------
int main() {

	setbuf(stdout, NULL);

	test_find_index_array();
	test_find_max_index();
	test_get_array_size();
	test_find_mode();
	test_update_pointer();
	test_find_next();

	return 0;
}

void test_find_next(){
	printf("------------------------------\n");
	printf("Start: Testing find_next:\n\n");

	int array1[MAX_ARRAY_SIZE] = {10,23,32,44,60,63,67,69,71,88};
	int array2[MAX_ARRAY_SIZE] = {9,11,17,33,47,49,57,66,73,75};
	int size;
	int* ptr = NULL;

	printf("Case 1:\n");
	size = 3;
	ptr = &array2[0];
	printf("array1 = ");print_array(array1,size);
	printf("array2 = ");print_array(array2,size);
	printf("ptr (before): %d\n",*ptr);
	find_next(array1,array2,size,&ptr);
	if(ptr)
		printf("ptr (before): %d\n\n",*ptr);

	printf("Case 2:\n");
	size = 4;
	ptr = &array2[1];
	printf("array1 = ");print_array(array1,size);
	printf("array2 = ");print_array(array2,size);
	printf("ptr (before): %d\n",*ptr);
	find_next(array1,array2,size,&ptr);
	if(ptr)
		printf("ptr (before): %d\n\n",*ptr);

	printf("Case 3:\n");
	size = 5;
	ptr = &array1[1];
	printf("array1 = ");print_array(array1,size);
	printf("array2 = ");print_array(array2,size);
	printf("ptr (before): %d\n",*ptr);
	find_next(array1,array2,size,&ptr);
	if(ptr)
		printf("ptr (before): %d\n\n",*ptr);

	printf("Case 4:\n");
	size = 10;
	ptr = &array2[9];
	printf("array1 = ");print_array(array1,size);
	printf("array2 = ");print_array(array2,size);
	printf("ptr (before): %d\n",*ptr);
	find_next(array1,array2,size,&ptr);
	if(ptr)
		printf("ptr (before): %d\n\n",*ptr);

	printf("Case 5:\n");
	size = 5;
	ptr = &array1[9];
	printf("array1 = ");print_array(&array1[4],size);
	printf("array2 = ");print_array(&array2[4],size);
	printf("ptr (before): %d\n",*ptr);
	find_next(&array1[4],&array2[4],size,&ptr);
	if(ptr)
		printf("ptr (before): %d\n\n",*ptr);
	else
		printf("ptr = NULL\n\n");

	printf("Case 6:Error Cases\n");
	ptr = array1;
	find_next(NULL,array2,4,&ptr);
	find_next(array1,NULL,4,&ptr);
	find_next(array1,array2,11,&ptr);
	find_next(array1,array2,-4,&ptr);
	find_next(array1,array2,5,NULL);
	printf("\n");

	printf("End: Testing find_next\n");
	printf("------------------------------\n\n");
	return;
}
void test_update_pointer() {
	printf("------------------------------\n");
	printf("Start: Testing update_pointer:\n\n");

	double array[MAX_ARRAY_SIZE] = {15.9, 21.6, 34.8, 9.2, 17.4, 29.0, 32.3, 8.7, 28.4, 18.5};
	double *ptr = NULL;
	double thresholds[6] = {10.0,30.1,25.0,8.2,17.1,50.2};
	int i;
	int starts[6] = {0,0,1,3,4,2};
	int sizes[6] = {10,10,9,2,1,8};
	int ptr_indx[6] = {0,0,2,3,4,5};

	for(i=0;i<6;i++){
		ptr = &array[ptr_indx[i]];
		printf("array = "); print_array_double(&array[starts[i]],sizes[i]);
		printf("threshold = %.1lf\nptr (before update) = %.1lf\n",thresholds[i],*ptr);
		ptr = &array[ptr_indx[i]];
		update_pointer(&array[starts[i]],sizes[i],thresholds[i],&ptr);
		printf("ptr (after update) = %.1lf\n\n",*ptr);
	}

	double *p = NULL;
	printf("array = "); print_array_double(&array[3],5);
	printf("threshold = %.1lf\nptr (before update) = NULL\n",30.0);
	update_pointer(&array[3],5,30.0,&p);
	printf("ptr (after update) = %.1lf\n\n",*p);

	update_pointer(NULL,10,10.2,&ptr);
	update_pointer(array,12,10.2,&ptr);
	update_pointer(array,10,10.2,NULL);
	printf("\n");

	printf("End: Testing update_pointer\n");
	printf("------------------------------\n\n");
	return;
}

void test_find_mode() {
	printf("------------------------------\n");
	printf("Start: Testing find_mode:\n\n");

	int array[MAX_ARRAY_SIZE] = {15, 20, 20, 15, 20, 35, 35, 15, 45, 20};
	int i,sizes[6] = {10,4,4,2,1,4}, start[6] = {0,5,0,8,1,2};

	for(i=0;i<6;i++){
		printf("array = "); print_array(&array[start[i]],sizes[i]);
		printf("mode = %d\n\n",*find_mode(&array[start[i]],sizes[i]));
	}

	find_mode(NULL,10);
	find_mode(array,-4);
	find_mode(array,15);
	printf("\n");

	printf("End: Testing find_mode\n");
	printf("------------------------------\n\n");
	return;
}

void test_get_array_size() {
	printf("------------------------------\n");
	printf("Start: Testing get_array_size:\n\n");

	short *ptr = NULL;
	short array[MAX_ARRAY_SIZE] = {73, 54, 81, 66, 39, 42, 66, 77, 66, 26};

	ptr = &array[5];
	printf("get_array_size(array,ptr) = %hd\n",get_array_size(array,ptr));

	ptr = &array[10];
	printf("get_array_size(array,ptr) = %hd\n",get_array_size(array,ptr));

	ptr = &array[0];
	printf("get_array_size(array,ptr) = %hd\n",get_array_size(array,ptr));

	ptr = &array[6];
	printf("get_array_size(array,ptr) = %hd\n",get_array_size(array,ptr));

	printf("get_array_size(NULL,ptr) = %hd\n",get_array_size(NULL,ptr));

	ptr = NULL;
	printf("get_array_size(array,NULL) = %hd\n\n",get_array_size(array,NULL));

	printf("End: Testing get_array_size\n");
	printf("------------------------------\n\n");
	return;
}

void test_find_max_index() {
	printf("------------------------------\n");
	printf("Start: Testing find_max_index:\n\n");

	int size = MAX_ARRAY_SIZE;
	int array[MAX_ARRAY_SIZE] = {73, 54, 81, 66, 39, 42, 61, 77, 59, 26};

	printf("array = "); print_array(array,size);

	printf("find_max_index(array,%d) = %d\n\n",size,find_max_index(array,size));

	array[0] = 83;
	printf("array = "); print_array(array,size);
	printf("find_max_index(array,%d) = %d\n\n",size,find_max_index(array,size));

	array[9] = 84;
	printf("array = "); print_array(array,size);
	printf("find_max_index(array,%d) = %d\n\n",size,find_max_index(array,size));

	array[5] = 84;
	printf("array = "); print_array(array,size);
	printf("find_max_index(array,%d) = %d\n\n",size,find_max_index(array,size));

	printf("find_max_index(array,-2) = %d\n\n",find_max_index(array, -2));

	printf("find_max_index(array,15) = %d\n\n",find_max_index(array, 15));

	printf("find_max_index(NULL,10) = %d\n\n",find_max_index(NULL, 10));

	printf("End: Testing find_max_index\n");
	printf("------------------------------\n\n");
	return;
}

void test_find_index_array() {
	printf("------------------------------\n");
	printf("Start: Testing find_index_array:\n\n");

	int i,size = MAX_ARRAY_SIZE;
	int array[MAX_ARRAY_SIZE] = {5,15,25,35,45,55,65,75,85,95};
	int cases[4] = {5,35,95,100},sizes[3]={5,0,11};

	printf("array = ");
	print_array(array,size);
	printf("\n");

	for(i=0;i<4;i++)
		printf("find_index_array(array,%d,%d) = %d\n",
				size,cases[i],find_index_array(array, size, cases[i]));

	for(i=0;i<3;i++)
	printf("find_index_array(array,%d,75) = %d\n\n",
			sizes[i],find_index_array(array, sizes[i], 75));

	printf("find_index_array(NULL,10,15) = %d\n\n",
			find_index_array(NULL, 10, 15));

	printf("End: Testing find_index_array\n");
	printf("------------------------------\n\n");
	return;
}

void print_array(int* array, const int size) {
	int i;
	printf("{");
	for(i=0;i<size;i++){
		printf("%d",array[i]);
		if(i != size - 1)
			printf(",");
	}
	printf("}\n");
	return;
}

void print_array_double(double* array, const int size) {
	int i;
	printf("{");
	for(i=0;i<size;i++){
		printf("%.1lf",array[i]);
		if(i != size - 1)
			printf(",");
	}
	printf("}\n");
	return;
}
