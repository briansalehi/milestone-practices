#include <stdio.h>

int main(void)
{
	int number = 0;
	printf("%d\n", number++); /* prints 0 */
	printf("%d\n", ++number); /* prints 2 */
	printf("%d\n", number--); /* prints 2 */
	printf("%d\n", --number); /* prints 0 */
	return 0;
}
