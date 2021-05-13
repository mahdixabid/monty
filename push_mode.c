#include "monty.h"
/**
 * stack_push - push new node to the stack.
 * @head: linked list's head address.
 * @new: address to pointer to new node
 * Return: nothing.
 */
void stack_push(stack_t **head, stack_t **new)
{
	if (*head == NULL)
	{
		(*new)->prev = NULL;
		(*new)->next = NULL;
		*head = (*new);
	}
	else
	{
		(*head)->prev = *new;
		(*new)->next = *head;
		(*new)->prev = NULL;
		*head = *new;
	}
}

/**
 * enqueue - push new node to the queue.
 * @head: linked list's head address.
 * @new: address to pointer to new node
 * Return: nothing.
 */
void enqueue(stack_t **head, stack_t **new)
{
	stack_t *tmp;

	if (*head == NULL)
	{
		(*new)->prev = NULL;
		(*new)->next = NULL;
		*head = (*new);
	}
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;

		tmp->next = *new;
		(*new)->next = NULL;
		(*new)->prev = tmp;
	}
}
