/* Anders Stadum
 ** 314 Eric Wills
 ** 2.57 Lab 1
 **/

#include <stdio.h>

typedef unsigned char *pointByte;

void show_bytes(pointByte begin, int len) { //
	int i;
	for (i = 0; i < len; i++) {
		printf(" %.2x", begin[i]);
	printf("\n");
	}
}

void show_short(short int x) { 
	printf("Display short int: ");
	show_bytes((pointByte) &x, sizeof(short int *)); //
}

void show_long(long int y) {
	printf("Display long int: ");
	show_bytes((pointByte) &y, sizeof(long int *)); //
}

void show_double(double z) {
	printf("Display double: ");
	show_bytes((pointByte) &z, sizeof(double *)); //
}

void display_bytes(int input) {
	show_short(input);    //display short hex value
	show_long(input);     //display long hex value
	show_double(input);   //display double hex value
}

int main() {
	int input;
	printf("Type int the value for byte: ");
	scanf("%d",&input); //display decimal format
	display_bytes(input);
	return 0;
}