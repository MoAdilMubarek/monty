#include "monty.h"

/**
 * push - push an element to stack
 * @stack: pointer
 * @line_number: line num
 */

void push(stack_t **stack, unsigned int line_number)
{
	int var_value;
	stack_t *new = malloc(sizeof(stack_t));

	if (!new)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if (!is_valid(&value))
	{
		fprintf(stderr, "L%d: usage: push integer", line_number);
		exit(EXIT_FAILURE);
	}
	var_value = atoi(&value);

	new->n = var_value;
	new->prev = NULL;
	if (!*stack)
	{
		new->next = NULL;
		*stack = new;
	}
	else
	{
		new->next = *stack;
		(*stack)->prev = new;
		*stack = new;
	}

}
