#include "sort.h"
/**
 * bubble_sort - fucntion sort array of intgers using bubble sort algorithm
 * @array: array of intgers
 * @size: number of intgers
 *
*/

void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t first, second;

	if (!array || !size)
		return;
	first = 0;
	while (first < size)
	{
		for(second = 0; second < size -1; second++)
		{
			if (array[second] > array[second + 1])
				{
					temp = array[second];
					array[second] = array[second + 1];
					array[second + 1] = temp;
					print_array(array, size);
				}
		}
		first++;
	}
}
