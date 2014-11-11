/* Anders Stadum
 ** 314 Eric Wills
 ** 2.83 Lab 1
 **/

#include <stdio.h>

unsigned f2u(float x) { //given function
    void *y = &x; 
    return *(unsigned *) y; 
}

int float_le(float x, float y) { //given function
	unsigned ux = f2u(x);
	unsigned uy = f2u(y);
	unsigned sx = ux >> 31;						//get signed bits
	unsigned sy = uy >> 31;						//get signed bits
	return ((ux << 1) == 0) && ((uy << 1) == 0) || (sx && !sy) ||  (!sx && !sy && ux <= uy) || (sx && sy && ux >= uy);
              //x = 0             y = 0            x < 0 y >=0         x >= 0      y = 0           x < 0      y < 0
}

int main() {
	int test1 = float_le(1.0f,2.0f);				//
	int test2 = float_le(2.0f,1.0f);				//
	int test3 = float_le(-2.0f,2.0f);				//
	int test4 = float_le(2.0f,-2.0f);				//
	int test5 = float_le(1.0f,1.0f);				//
	int test6 = float_le(0x00000000f, 0x08000000f);	//
	printf("%d\n%d\n%d\n%d\n%d\n%d\n", test1,test2,test3,test4,test5,test6); //print tests in decimal format
	return 0;
}






