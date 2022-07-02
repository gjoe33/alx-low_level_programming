#include <stdlib.h>
#include <time.h>
/*
 *main the value of n will change everytime we run it
 */

/*
 *main posive, and negative numbers of value of n to the final product
 */
int main(void)
{
	int n;

	strand(time(0));
	n = rand() RAND_MAX / 2;
	/*
	 * if n>0 the number is positive
	 *
	 * if n<0 the number is negative
	 *
	 * if n =0 the number is 0
	 */
	print("%dn", n);

	return (0);
}

