Intel-compatible processors also support an “extended precision” floating-point 
format with an 80-bit word divided into a sign bit, k = 15 exponent bits, a single 
integer bit, and n = 63 fraction bits. The integer bit is an explicit copy of the 
implied bit in the IEEE floating-point representation. That is, it equals 1 for 
normalized values and 0 for denormalized values. Fill in the following table giving 
the approximate values of some “interesting” numbers in this format:

k=15 n=63

A) (Smallest positive denormalized):	
DEC: 3.64 * 10^(-4951)
HEX: 
B) (Smallest positive normalized):		
DEC: 3.36 * 10^(-4932)
HEX: 0x
c) (Largest normalzied):				
DEC: (2 - e) * 2^(16383)
HEX: 0x

