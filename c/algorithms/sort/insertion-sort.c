#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
 * Sort array linearly
 *
 * @param: empty array on parameter will be initialized and
 * input elements will be stored in the array sorted.
 */
void sort(int *array, const int length)
{
	for (int index = 0; index < length; ++index) {
		int key = array[index];
		int pad = index - 1;
		while((pad >= 0) && (array[pad] > key)) {
			array[pad+1] = array[pad];
			pad--;
		}
		array[pad+1] = key;
	}
}

/*
 * Display array in terminal
 *
 * @input: empty array in first parameter
 */
void print(const int *array, const int length)
{
	for (int index = 0; index < length; ++index)
		printf("%d", array[index]);
	putchar('\n');
}

int main(void)
{
	/*
	 * declare empty array and let functions initialize it
	 */
	const int length = 5;
	int array[] = {4,5,3,1,2};

	/*
	 * print shuffle array
	 */
	print(array, length);

	/*
	 * initialize memory into array,
	 * sort array element by insertion sort,
	 */
	sort(array, length);

	/*
	 * print sorted array
	 */
	print(array, length);

	/*
	 * free memory initialized by sort function
	 */
	//free(array);

	return 0;
}
