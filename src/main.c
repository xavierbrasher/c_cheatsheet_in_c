#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int mathFunctions() {
	// basic math functions 
	printf("To the power to: %f, Square root of a num: %f, round-up: %f, round-down: %f \n", pow(2, 3), sqrt(36), ceil(34.4), floor(34.6));
	return 0;
}

int data_types_and_printf() {
	// Data Types
	int whole_num = 9;
	double like_float_but_with_less_ram = 3.214;
	float num_with_decimal = 0.123;
	char letter = 'c';
	char letter_array[] = "Wow this is a letter array";

	// printf
	printf("Whole-number: %d, float/double: %f, char: %c, char-arr: %s \n", whole_num, num_with_decimal, letter, letter_array);
	return 0;
}

int comments(){
	// one lined comment

	/* 
	Multiline comments
	*/

	return 0;
}

int main() {
	data_types_and_printf();
	mathFunctions();
	comments();
	
	return 0;
}