#include "monty.h"
/**
 * _pall - print all linked list node data.
 * @head: address of linked list's head.
 * @line_number: the line number of the monty file we're treating.
 * Return: nothing.
 */
void _pall(stack_t **head)
{
	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		printf("%d\n", (*head)->n);
		(*head)->next = *head;
	}
}
