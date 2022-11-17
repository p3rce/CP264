/*
 * ---------------------------------
 * Student Name: Pierce Goulimis
 * Student ID: 210276250
 * Student Email: goul6250@mylaurier.ca
 * ---------------------------------
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void count_letters(const char *filename, int counters[26]);
void write_results(const char *filename, int counters[26]);
void append_sum(const char *filename, int counters[26]);

int main() {
	setbuf(stdout, NULL);

	char filename[20] = "text1.txt";
	int counters[26] = { 0 };

	count_letters(filename, counters);

	filename[4] = '2';
	write_results(filename, counters);

	append_sum(filename, counters);

	printf("Check text2.txt for output\n");

	return 0;
}

void count_letters(const char *filename, int counters[26]) {
	//your code here

	//Get file
	FILE *fp = fopen(filename,"r");

	//Check if file exists
	if(fp == NULL) {
		printf("Error(count_letters): Could not open file \"%s\"\n",filename);

		return;
	}



	//Infinite loop that will run until break statement (in this case the EOF)!
	while(1) {

		//Get the next character from the FP stream
		char ch = fgetc(fp);

		//If the character is the end of file, break and end the while loop
		if(ch == EOF) {
			break;
		}


		//If the character is uppercase
		if(isupper(ch)) {
			//Increase count
			counters[ch-'A']++;
		}

		//If the character is lowercase
		if(islower(ch)) {
			//Increase count
			counters[ch-'a']++;
		}

	}

	return;
}

void write_results(const char *filename, int counters[26]) {
	//your code here

	//Get file
	FILE *fp = fopen(filename, "w+");

	//Make sure it exists
	if(fp == NULL) {
		printf("Error(write_results): Could not open file \"%s\"\n",filename);

		return;
	}


	//For each letter in alphabet
	for(int i = 0; i < 26; i++) {

		//Print out count(LETTER) = FREQUENCY
		fprintf(fp,"count(%c) = %d\n",i+'a',counters[i]);

	}



	fclose(fp);


	return;

}

void append_sum(const char *filename, int counters[26]) {
	//your code here


	//Get file
	FILE *fp = fopen(filename, "a+");

	//Check if exists
	if(fp == NULL) {
		printf("Error(append_sum): Could not open file \"%s\"\n",filename);

		return;
	}


	//Init a counter
	int count = 0;


	//For each of the letters in the alphabet in file
	for(int i = 0; i < 26; i++) {

		//Increase the counter
		count += counters[i];

	}

	//Print total uppercase + lowercase characters
	fprintf(fp,"Total = %d\n",count);
	fclose(fp);





	return;
}

