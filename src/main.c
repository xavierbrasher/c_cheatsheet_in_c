#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int math_functions() {
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

int constants() {
	const int NUM = 5; // or could be int const NUM = 5;
	printf("Num: %d \n", NUM);
	// num = 6; // This would error as its not mutable
	printf("Num: %d \n", NUM);

	printf("HELLO"); // considered a constant
	// printf("&d", 90); // considered a constant

	return 0;
}

int get_user_input() {
	int age;
	printf("Enter your age: ");
	scanf("%d", &age); // you use scanf with a format and then reference the mut variable
	printf("You are %d years old\n", age);

	double gpa;
	printf("Whats your GPA: ");
	scanf("%lf", &gpa); // you use scanf with a format and then reference the mut variable
	printf("Your GPA is %f\n", gpa);
	
	char name[100]; // worse alternative for getting char_array
	printf("Whats your name: ");
	scanf("%s", name); // you use scanf with format but on char_arrays, you just type in the variable and not the reference
	printf("Your name is %s\n", name);
	
	getchar();
	char full_name[100]; // better alternative for getting char_array
	printf("Whats your full name: ");
	fgets(full_name, 100, stdin);
	printf("Your full name is %s\n", full_name);

	return 0;
}

int basic_calculater() {
	double num1;
	double num2;
	printf("Enter first number: ");
	scanf("%lf", &num1);
	printf("Enter second number: ");
	scanf("%lf", &num2);
	printf("Numbers added together equal too: %f\n", num1 + num2);

	return 0;
}

int mad_libs_game() {
	char color[20];
	char plural_noun[20];
	char celebrity_first[20];
	char celebrity_last[20];

	printf("Enter a color: ");
	scanf("%s", color);

	printf("Enter a plural noun: ");
	scanf("%s", plural_noun);

	printf("Enter a celebrity: ");
	scanf("%s %s", celebrity_first, celebrity_last);

	printf("Roses are %s\n", color);
	printf("%s are blue\n", plural_noun);
	printf("I love %s %s\n", celebrity_first, celebrity_last);

	return 0;
}

int arrays() {
	double s[4] = {1,2,4,5};
	s[0] = 5.3;
	s[1] = 3.2;
	printf("%f\n", s[0]);

	char phrase[20] = "Wow Array"; // strings
	printf("Wow phrase: %s \n", phrase);

	return 0;


void sayHi() {
	printf("Hello user \n");
}

void function() {
	printf("Top");
	sayHi();
	printf("Bottom");
}

int main() {
	// data_types_and_printf();
	// math_functions();
	// comments();
	// constants();
	// get_user_input();
	// basic_calculater();
	// mad_libs_game();
	// arrays();
	function();

	return 0;
}