/* Anders Stadum
 ** 314 Eric Wills
 ** 2.71 Lab 1
 **/

#include <stdio.h>

typedef unsigned packed_t;

int xbyte(packed_t word, int bytenum) {

	return (((int)word >> (bytenum << 3)<<24)>>24);
}


int main() {
	packed_t bytes  = 0x12345678;
    packed_t bytes2 = 0x12345678;
    packed_t bytes3 = 0x12345678;
    packed_t bytes4 = 0x12345678;
	int w = xbyte(bytes, 0);
    int x = xbyte(bytes2, 1);
    int y = xbyte(bytes3, 2);
    int z = xbyte(bytes4, 3);
    printf("Positive Hex's\n");
    printf("--------------\n");
	printf(" Position 0: %.8x\n", w);
    printf(" Position 1: %.8x\n", x);
    printf(" Position 2: %.8x\n", y);
    printf(" Position 3: %.8x\n ", z);
    packed_t bytes5  = 0xffcc0000;
    packed_t bytes6 = 0xffcc0000;
    packed_t bytes7 = 0xffcc0000;
    packed_t bytes8 = 0xffcc0000;
	int a = xbyte(bytes5, 0);
    int b = xbyte(bytes6, 1);
    int c = xbyte(bytes7, 2);
    int d = xbyte(bytes8, 3);
    printf("Negative Hex's\n");
    printf("--------------\n");
	printf(" Position 0: %.8x\n", a);
    printf(" Position 1: %.8x\n", b);
    printf(" Position 2: %.8x\n", c);
    printf(" Position 3: %.8x\n", d);
	return 0;
}

//When you bitwise & a 32 bit signed integer with 0xFF the most significant bit - i.e. the sign bit - of 
//the result is always 0, so the original function never returns a negative value regardless of the input.