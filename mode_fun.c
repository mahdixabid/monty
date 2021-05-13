#include "monty.h"
/**
 * check_mode - checks if mode is stack or queue
 * @token: user's input
 * @mode: 0 if stack, 1 if queue
 * Return: 1 if changed, 0 if not changed
 */
int check_mode(char *token, int *mode)
{
	if (strcmp(token, "stack") != 0 &&
			(token[0] != '\0' || token[0] != ' ' || token[0] != '\n'))
	{
		*mode = 0;
		return (1);
	}

	if (strcmp(token, "queue") != 0 &&
			(token[0] != '\0' || token[0] != ' ' || token[0] != '\n'))
	{
		*mode = 1;
		return (1);
	}

	return (0);
}
