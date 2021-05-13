#include "monty.h"
/**
 * free_list - frees the linked list
 * @head: top of the stack
 * @fp: file
 * @line: line
 * Return: void
 */
void free_list(stack_t **head, FILE *fp, char *line)
{
	if (*head != NULL)
	{
		while ((*head)->next != NULL)
		{
			(*head) = (*head)->next;
			free((*head)->prev);
		}
		free(*head);
	}
	fclose(fp);
	free(line);
}
