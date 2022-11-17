/**
 -------------------------
 Student Name: Pierce Goulimis
 Student ID: 210276250
 Student email: goul6250@mylaurier.ca
 -------------------------
 **/

#include<stdio.h>



//void t2();

//MARK: - Functions

void t1() {

	int tallTrees;
	int shortTrees;
	int total;

	double avg_height;
	char symbol = 84;
	const double val = 43;

	printf("Enter number of tall trees: ");
	scanf("%d",&tallTrees);

	printf("Enter number of short trees: ");
	scanf("%d",&shortTrees);

	total = tallTrees + shortTrees;

	//printing report
	printf("Number of %c trees = %d\n", symbol, tallTrees);
	printf("Number of %c trees = %d\n",(symbol-1),shortTrees);
	printf("Average height = %.2lf \n", (val / total));


	return;

}

void t2(){


	unsigned int year;
	int month;
	int day;
	char university[30];

	// your code here

	printf("Enter year: ");
	scanf("%d", &year);

	printf("Enter month: ");
	scanf("%d", &month);

	printf("Enter day: ");
	scanf("%d", &day);

	printf("Enter university: ");
	scanf("%s", &university);


	//Output

	//University
	printf("This is %s University", university);

	//Todays date
	printf("\nToday is: %d/%d/%d", day,month,year);



	return;


}


void t3(){
	//your code here
	printf("Hints for C Language: \n");
	printf("Insert \\n at end of printf for newline. \n");
	printf("Use \"double quotes\" not 'single quotes' for strings. \n");
	printf("Use %%d for integer, %%f for float and %%lf for double.");






	return;
}


//MARK: - Main


main() {

	setbuf(stdout, NULL);

	t1();
	printf("\n");

	t2();
	printf("\n");


	t3();

}

