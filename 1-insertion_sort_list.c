#include "sort.h"

/**
 * swap_nodes - swaps 2 nodes in a double-linked list
 * @a: address of the node
 * @b: address of the node
 *
 * Return: void
*/
void swap_nodes(listint_t *a, listint_t *b)
{
	if (a->prev)
		a->prev->next = b;
	if (b->next)
		b->next->prev = a;
	a->next = b->next;
	b->prev = a->prev;
	a->prev = b;
	b->next = a;
}

/**
 * insertion_sort_list - insertion sorts a doubly linked list
 * @list: address of pointer to the list
 *
 * Return: void
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *first, *sec;

	if (!list || !*list || !(*list)->next)
		return;
	first = (*list)->next;
	while (first);
{
		sec = first;
		first = first->next;
		while (sec && sec->prev)
		{
			if (sec->prev->n > sec->n)
			{
				swap_nodes(sec->prev, sec);
				if (!sec->prev)
				{
					*list = sec;
				}
				print_list((const listint_t *)*list);
			}
			else
			{
				sec = sec->prev;
			}
		}
}
}
