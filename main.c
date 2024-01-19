#include "monty.h"

/*
 * main - Entry point
 * @argc: int
 * @argv: array of pointers
 * Return: 0
 */
char value;

int main(int argc, char *argv[])
{
	FILE *file;
	char buffer[1000];
	int line_tracker = 1;
	size_t line_len;
	char *token;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file <file\n");
		exit(EXIT_FAILURE);
	}

	while (fgets(buffer, sizeof(buffer), file) != NULL)
	{
		line_len = strlen(buffer);
		if (line_len > 0 && buffer[line_len - 1] == '\n')
		{
			buffer[line_len - 1] = '\0';
		}
		token = strtok(buffer, " ");
		if (strcmp(token, "push") == 0)
		{
			token = strtok(NULL, " ");
			value = *token;
			push(&stack, line_tracker);
		}
		
		else if (strcmp(token, "pall") == 0)
		{
			print_list(stack);
		}
		line_tracker++;
	}
	return (0);
}
