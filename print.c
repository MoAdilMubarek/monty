#include "monty.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer
 * Return: num of element
 */

size_t print_list(stack_t *stack)
{
	stack_t *current;
	size_t i;

	current = stack;
	i = 0;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}

	return (i);
}
