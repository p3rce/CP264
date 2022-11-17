/**
 -------------------------
 CP264 (Spring 2022)
 Assignment: A2
 Matrix Header File
 -------------------------
 **/
#ifndef MATRIX_H_
#define MATRIX_H_

# define SIZE 10
# define True 1;
# define False 0;
# define ERROR_CODE -99;

int matrix[SIZE][SIZE]; //global variable to store matrix

void initialize_matrix();
void clear_matrix();
void print_submatrix(int, int);

int set_matrix_item(int, int, int);
void copy_matrix(int[10][10]);

int is_equal_matrix(int[10][10]);
int get_row_length(int);
int get_column_length(int);
int get_matrix_item(int, int);
int contains_item_matrix(int[100], int);

int is_empty_matrix();
int is_vector_matrix();
int is_matrix();

#endif /* MATRIX_H_ */
