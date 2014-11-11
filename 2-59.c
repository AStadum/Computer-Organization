/* Anders Stadum
** 314 Eric Wills
** 2.59 Lab 1
**/

#include <stdio.h>

int main() {
	unsigned int x = 0x89ABCDEF; //given hex
	unsigned int y = 0x76543210; //given hex
	x = x << 24; //shift x values 24 to the left
	x = x >> 24; //shift x values 24 to the right
	y = y >> 8;  //shift y values 8 to the left
	y = y << 8;  //shift y values 8 to the right
	unsigned int z = y + x; //add hex numbers together and assign to variable z
	printf("%X",z); //print hex format
	return 0;
}