#include <stdio.h>
using namespace std;
//Write a macro with two arguments a and pos, where a is a byte and the pos specifies a bit position of the byte. The macro should clear the particular bit position in the given byte.
/* bit clear:
  1st arg: int, 2nd arg: bit position to clear */
#define CLEARBIT(a, pos) (a &= ~(1 << pos) )

int main()
{
	/* 'z': decimal value 122 (=01111010) */
	char a = 'z';

	/* clearing the 5th bit */
	char aOut = CLEARBIT(a, 5);

	/* aOut = 'Z': decimal value 90 (=01011010) */
	printf("aOut=%c\n", aOut);

	return 0;
}
