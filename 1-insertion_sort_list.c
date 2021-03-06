#include "sort.h"

/**
 * insertion_sort_list - sorts a doiubly linked list
 * @list: pointer to doubly linked list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp;

	if (!list || !(*list)->next)
	return;

	current = (*list)->next;

	while (current != NULL)
	{
	while (current->n > current->prev->n)
	{
	if (!current->next)
	return;
	current = current->next;
	}
	tmp = current->next;
	while (current->prev && current->n < current->prev->n)
	swapNode(list, current->prev, current);
	current = tmp;
	}
}

/**
 * swapNode - swaps two close nodes based on comparison
 * @list: the list of nodes
 * @node1: first node
 * @node2: second node
 * Return: void
 */

void swapNode(listint_t **list, listint_t *node1, listint_t *node2)
{
	if (node1->prev)
	node1->prev->next = node2;
	if (node2->next)
	node2->next->prev = node1;
	node1->next = node2->next;
	node2->prev = node1->prev;
	node2->next = node1;
	node1->prev = node2;
	while ((*list)->prev)
	*list = (*list)->prev;
	print_list(*list);
}
