#include "sort.h"

/**
 * swap = swap 2 int values
 * @array: the intger array to sort
 * @size: the size of the array
 * @a: address of the first value
 * @b: address of the second value
 * Return: void
*/

void swap(int *array, size_t size, int *a, int *b)
{
	if (*a != *b)
	{
		*a = *a + *b;
		*b = *a - *b;
		*a = *a - *b;
		print_array((const int *) array, size);
	}
}


/**
 * lomuto_part - partions the array
 * @array: the array to sort
 * @size: the number of elements
 * @low: the lowest
 * @high: the highest
 *Return: size_t
*/


size_t lomuto_part(int *array, size_t size, ssize_t low, ssize_t high)
{
	int i, j, pivot = array[high];

	for (i = j = low; j < high; j++)
		if (array[j] < pivot)
			swap(array, size, &array[j], &array[i++]);
	swap(array, size, &array[i], &array[high]);

	return (i);
}




/**
 *QuickSort - quick sorts via lomuto partionary scheme
 * @array: the intger array to sort
 * @size: the size of the array
 * @low: the low index of the sorted array
 * @high: the high index of the sorted array
 *Return: void
*/



void QuickSort(int *array, size_t size, ssize_t low, ssize_t high)
{
	if (low < high)
	{
		size_t p = lomuto_part(array, size, low, high);

		QuickSort(array, size, low, p - 1);
		QuickSort(array, size, p + 1, high);
	}
}



/**
 *quick_sort - sort array using quick sort algorithm
 *@array: array to sort
 *@size: number of elements
 *Return: void
*/

void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;
	QuickSort(array, size, 0, size - 1);

}