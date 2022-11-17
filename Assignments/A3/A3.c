/**
 * -------------------------
 * Student Name: Pierce Goulimis
 * Student ID: 210276250
 * Student email: goul6250@mylaurier.ca
 * -------------------------
 */

# include <stdio.h>
# include "A3.h"



//DONE
int find_index_array(int* array, const int size, int value){
	//your code here

	int index = -1;

	if(array == NULL) {

		printf("Error(find_index_array): array is NULL \n");

		return index;

	}


	if(size < 1 || size > 10) {

		printf("Error(find_index_array): invalid size \n");

		return index;

	}


	for(int i = 0; i < size; i++) {

		if(array[i] == value) {

			index = i;
			break;

		}

	}


	return index;



}



//DONE
int find_max_index(int* array, const int size){
	//your code here

	int maxIndex = -1;
	int maxItem = 0;


	if(array == NULL) {

		printf("Error(find_index_array): array is NULL \n");

		return maxIndex;

	}


	if(size < 1 || size > 11) {

		printf("Error(find_index_array): invalid size \n");

		return maxIndex;

	}


	//Start by assuming the 1st item is the max
	maxItem = 0;

	for(int i = 0; i < size; i++) {

		if(array[i] > maxItem) {

			maxItem = array[i];
			maxIndex = i;

		}

	}







	return maxIndex;
}



//DONE
short get_array_size(short* array, short* end_ptr){
	//your code here

	short arraySize = 0;
	    short arrayItem = *end_ptr; //Get value recieved from end_ptr location

		if(array == NULL) {
			return arraySize;
		}

		if(end_ptr == NULL) {

			return arraySize;

		}



	    arraySize = (end_ptr + 1) - array;

	return arraySize;
}




//DONE
int* find_mode(int* array, const int size){
	//your code here

	int maxValue = 0;
	int count = 0;
	int maxCount = 0;

	int *ptr = &maxValue; //Pointer points to the location of maxValue


	//For each value in array
	for(int i = 0; i < size; i++) {

		//Assign counter to 0
		count = 0;


		for(int j = 0; j < size; j++) {


			//If value of array at i index isequal to value of array at j, +1 the count
			if(array[i] == array[j]) {

				count++;

			}



		} //End j for loop


		//If the count of this item is greater then the maxCount
		if(count > maxCount) {

			//Assign max count to value of count
			maxCount = count;
			maxValue = array[i]; //Assign max value to the value of array at index i

		}


	} //End i for loop


	return ptr;



}


//DONE
void update_pointer(double* arr, const int size, double threshold, double ** ptr){
	//your code here


	//Validate ptr
	if(*(ptr) == NULL) {
		printf("Error(update_pointer): invalid ptr\n");
	}

	//Validate array
	if(arr == NULL) {
		printf("Error(update_pointer): array is NULL\n");
	}

	//Validate size
	if(size < 0) {

		printf("Error(update_pointer): invalid size\n");

	}


	//Assign last element variable to -1
	int last = -1;

	//Search array
	for(int i = 0; i < size; i++) {

		//If current value is greater then or equal to the threshhold value
		if(arr[i] >= threshold) {

			//Update the last element to the index value of the >= value
			last = i;

		}

	} //End i for loop


	//If no elements are satisfying >= (nothings changed)
	if(last == -1) {

		return;

	} else {


		//Point the ppinter to the location of the value of the array with index last
		*(ptr) = &arr[last];

	}







}


//DONE
void find_next(int* array1, int* array2, const int size, int** ptr1){
	//your code here


	//Validate
	if(array1 == NULL || array2 == NULL) {
		printf("Error(find_next): one of the arrays is NULL\n");


	}

	if(size < 1) {

		printf("Error(find_next): invalid size\n");

	}


	if(ptr1 == NULL) {

		printf("Error(find_next): pointer is NULL");

	}


	int i = 0;
	int j = 0;
	int target = **ptr1;


	for(i; i < size && j < size;) {

		if(array1[i] < array2[j]) {

			if(array1[i] > target) {

				**ptr1 = array1[i];
				return;

			}
			i++;

		} else {

			if(array2[j] > target) {

				**ptr1 = array2[j];
				return;

			}
			j++;

		}

	}


	for(i; i < size;) {

		if(array1[i] > target) {

			**ptr1 = array1[i];
			return;

		}

		i++;

	}


	for(j; j < size;) {

		if(array2[j] > target) {

			**ptr1 = array2[j];
			return;

		}
		j++;

	}



	**ptr1 = -1;





	return;
}
