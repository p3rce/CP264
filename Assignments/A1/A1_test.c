#include <stdio.h>
#include "A1.h"

void test_solve_equation();
void test_prints();
void test_get_code();
void test_print_description();
void test_math_game();

int main(){
	setbuf(stdout,NULL);
	test_solve_equation();
	test_prints();
	test_get_code();
	test_print_description();
	test_math_game();
	return 0;
}

void test_solve_equation(){
	printf("------------------------------\n");
	printf("Start: Testing solve_equation:\n\n");

	double r;
	r = solve_equation(11.4,127.245,66.7991);
	printf("result = %.3lf\n",r);
	printf("\n");

	r = solve_equation(52.34, 56.01, 132.863);
	printf("result = %.3lf\n",r);
	printf("\n");

	printf("End: Testing solve_equation\n");
	printf("------------------------------\n\n");
	return;
}

void test_prints(){
	int success, i;
	short types[7] = {10,20,11,21,22,24,12};
	short cases[7]={0,1,2,3,4,5,6};

	printf("------------------------------\n");
	printf("Start: Testing print_product_type, print_color and print_country:\n\n");

	printf("Testing print_product_type:\n");
	for(i=0;i<7;i++){
		printf("print_product_type(%hi) = ", types[i]);
		success = print_product_type(types[i]);
		printf(", success = %d\n",success);
	}
	printf("\n");

	printf("Testing print_color:\n");
	for(i=0;i<7;i++){
		printf("print_color(%hi) = ",cases[i]);
		success = print_color(cases[i]);
		printf(", success = %d\n",success);
	}
	printf("\n");

	printf("Testing print_country:\n");
	for(i=0;i<4;i++){
		printf("print_country(%hi) = ",cases[i]);
		success = print_country(cases[i]);
		printf(", success = %d\n",success);
	}
	printf("\n");

	printf("End: Testing print_product_type, print_color and print_country\n");
	printf("------------------------------\n\n");
	return;
}

void test_get_code(){
	printf("------------------------------\n");
	printf("Start: Testing get_code:\n\n");

	long serial_number[4]={21065319,10134918, 13577192, 624891010};
	char types[5] = {'I','T','C','R','M'};
	int i,j;
	for(i=0;i<4;i++){
		for(j=0;j<5;j++)
			printf("get_code(%ld,%c) = %hd\n",serial_number[i],
					types[j],get_code(serial_number[i],types[j]));
		printf("\n");
	}
	printf("End: Testing get_code\n");
	printf("------------------------------\n\n");
	return;
}

void test_print_description(){
	printf("------------------------------\n");
	printf("Start: Testing print_description:\n\n");

	int i;
	long serial_number[10]={21061001, 14131122, 32241114, 23792063, 18811232, 39822294, 28372758,
			49463463, 55610375, 1357786};

	for (i=0;i<10;i++){
		printf("Serial number = %ld\n",serial_number[i]);
		print_description(serial_number[i]);
		printf("\n");
	}

	printf("End: Testing print_description\n");
	printf("------------------------------\n\n");
	return;
}

void test_math_game(){
	printf("------------------------------\n");
	printf("Start: Testing math_game:\n\n");
	char winner;

    int cases[3][8] = {{10, -1, 30, 4, 20, 2, 40, 3},
    		{10, 2, -30, 2, 18, 5, 50, 3},
			{10, 2, -30, 2, 1800, 1, -100, 5}
    };

    for(int i=0;i<3;i++){
        winner = math_game(cases[i][0],cases[i][1],cases[i][2],cases[i][3],
        		cases[i][4],cases[i][5],cases[i][6],cases[i][7]);
        printf("Winner is: %c\n\n",winner);
    }
	printf("End: Testing math_game\n");
	printf("------------------------------\n\n");
	return;
}
