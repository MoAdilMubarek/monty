#include "monty.h"

/**
 * print_top - print
 * @stack: pointer
 */

void print_top(stack_t *stack, int line)
{
	stack_t *new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new = stack;
	if (!new)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", new->n);
}
