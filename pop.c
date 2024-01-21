#include "monty.h"

/**
 * pop - removes the top element of the stack
 * @stack: pointer
 * @line_number: integer
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *new;

	if (!*stack)
	{
		fprintf(stderr, "L%d: can't pop an empty stack", line_number);
		exit(EXIT_FAILURE);
	}
	new = *stack;
	*stack = (*stack)->next;

	if (*stack != NULL)
	{
		(*stack)->prev = NULL;
	}
	free(new);
}
