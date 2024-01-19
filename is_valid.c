#include "monty.h"

/**
 * is_valid: function
 * @str: string
 * Return: True or False
 */

int is_valid(const char *str) {
    char *endptr;

    strtol(str, &endptr, 10);
    
    return (*endptr == '\0');
}
