/**
 * -------------------------
 * Student Name:
 * Student ID:
 * Student email:
 * -------------------------
 */

# include <stdio.h>
# include "matrix.h"

//----------- Task 1: Symmetric Matrix ------------

/**
 * ----------------------------------------------------------------
 * Parameters:		None
 * return:			True(1)/False(0)
 * Description:
 * 		inspect the current contents of matrix
 * 		return True if the contents represent a valid symmetric matrix
 * 		A symmetric matrix is a matrix which equals to its transpose
 * 		For more info check: https://mathinsight.org/matrix_transpose
 * 		Notes:
 * 		- an empty matrix is a VALID symmetric matrix
 * 		- a symmetric matrix need to be a square matrix
 * ----------------------------------------------------------------
 */
int is_symmetric_matrix(){
	//your code here

	int matrix = initalize_matrix();





}

//----------- Task 2: Incremental Matrix ------------
/**
 * ----------------------------------------------------------------
 * Parameters:		None
 * return:			True(1)/False(0)
 * Description:
 * 		inspect the current contents of matrix
 * 		return True if the contents represent a valid incremental matrix
 * 		An incremental matrix is:
 * 		a matrix which every element is greater than or equal to the one before it
 * 		Order: left to right, then top to bottom.
 * ----------------------------------------------------------------
 */
int is_incremental_matrix() {
	//your code here
	return False;
}

//----------- Task 3: Triangular Matrix  ------------

/**
 * ----------------------------------------------------------------
 * Parameters:	length(int): square side length
 * 				corner(char): 'T'= top corner, 'B' = bottom corner
 * 				side(char): 'L' = left side, 'R' = right side
 * 				fill(int): number to fill the matrix with
 * return:		no returns
 * Description:
 * 		Initialize a matrix then fill it in a triangular manner
 * 		The corner and side determine the position of the triangle right angle
 * 		All cells in the triangle are set to "fill", and the other cells to 0
 * Errors: 		invalid length, invalid corner, invalid side
 * ----------------------------------------------------------------
 */
void create_triangular_matrix(int length, char corner, char side, int fill){
	//your code here




	return;
}

//----------- Task 4: Flip Matrix  ------------
/**
 * ----------------------------------------------------------------
 * Parameters:	mode(char): 'h': horizontal, 'v': vertical
 * return:		no returns
 * Description:
 * 		flips the contents of the global matrix
 * 		For horizontal flip, the first row is swapped with the last row
 * 			the second row is swapped with the second to last row, and so forth
 * 		For vertical flip, the first column is swapped with the last column
 * 			the second column is swapped with the second to last column, and so forth
 * Errors: 	invalid mode, invalid matrix
 * ----------------------------------------------------------------
 */
void flip_matrix(char mode){
	//your code here





	return;
}
