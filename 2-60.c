/* Anders Stadum
 ** 314 Eric Wills
 ** 2.60 Lab 1
 **/

#include <stdio.h>

unsigned replace_byte(unsigned x, int i, unsigned char b) {
	int position = i << 3;			//shifting times 8 or 2^3
	unsigned mask = 0xFF;			//Setting mask
	unsigned word = x;				//assigning unsigned word variable to x
	unsigned int charBit = b;		//
	mask = mask << position;		//
	mask = ~mask;					//
	word = word & mask;				//
	charBit = charBit << position;	//
	word = word | charBit;			//

	printf("%X\n", word);

}

int main() {
	printf("The word byte for position 2: ");
	replace_byte(0x12345678, 2, 0xAB); //result should be 0x12AB5678
	printf("The word byte for position 0: ");
	replace_byte(0x12345678, 0, 0xAB); //result should be 0x123456AB
	return 0;
}