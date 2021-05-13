#include "monty.h"
/**
 * _push - push new node to linked list.
 * @head: linked list's head address.
 * @arg: the push's corresponding arg.
 * @mode: 0 if stack and 1 if queue.
 * Return: nothing.
 */
void _push(stack_t **head, char *arg, int *mode)
{
	stack_t *new = NULL;
	int num = atoi(arg);

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		error = 1;
		free(new);
		return;
	}
	new->n = num;
	if (*mode == 0)
		stack_push(head, &new);
	else
		enqueue(head, &new);

}
