#include <stdlib.h>
#include <time.h>
/*
 *main- this is the main function to detamine value of n
*/

/*
 *main posive, and negative numbers of value of n to the final product
 description-the starting point of the program
 */
/*
 * main positive number is >0 and negative when the number is <0
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

