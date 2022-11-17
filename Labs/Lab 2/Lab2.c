/*
-------------------------------------
File:    Lab2.c
Project: Lab 2
file description
-------------------------------------
Author:  Pierce Goulimis
ID:      210276250
Email:   goul6250@mylaurier.ca
Version  2022-09-24
-------------------------------------
 */
/**
 * --------------------------------------------------------
 * Computes the value of r using the four input parameters: w,x,y and z.
 * The value of r is computed according to the equation: 
 * r = log(y) *fabs(w-x)/sqrt(z) + ........................
 * The function returns no value
 * ----------------------------------------------------------
 */

#include<stdio.h>
#include<math.h>

void solve2(short w, int x, float y, double z) {
	//your code here


	//First let's compute the answer
	double a;
	double b;
	double c;
	double r;

	//Function 1
	a = log(y) *fabs(w-x)/sqrt(z);

	//Function 2
	b = (exp(4)*fabs((y*pow(z,3)/x)));



	//Function 3
	c = 3 *(sqrt(pow(x,y) - y));


	//Combine all together
	r = a + b - c;



	//Formatted Output
	printf("%f\n", r);



	return;
}

/**
 * --------------------------------------------------------
 * Generates and returns a random integer.
 * the mode input parameter controls how the random number is generated, as follows:
 * 1-	If mode is �1�: The function generates a random number in the range [0,x1], i.e. inclusive both ends.
 * 2-	If mode is �2�: The function generates a random number in the range (0,x2), i.e. exclusive both ends.
 * 3-	If mode is �i�: The function generates a random number in the range [x1,x2], i.e. inclusive both ends.
 * 4-	If mode is �x�: The function generates a random number in the range (x1,x2), i.e. exclusive both ends.
 * 5-	If mode is �L�: The function generates a random number in the range [x1,x2), i.e. inclusive only from the left which is x1.
 * 6-	If mode is �R�: The function generates a random number in the range (x1,x2], i.e. inclusive only from the right which is x2.
 * 7-	For any other mode value, the function generates a random number between 0 and RAND_MAX.
 * The function is implemented using switch-case statement.
 * Assume that x1 is always less than x2 by at least 2.
 * ----------------------------------------------------------
 */
unsigned int rand_int(unsigned int x1, unsigned int x2, char mode) {
	//your code here






	return 0;
}
