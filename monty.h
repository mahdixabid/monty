#ifndef monty_h
#define monty_h
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
extern int error;
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
int main(int ac, char **av);
char **parse_line(char *line);
void free_list(stack_t **head, FILE *fp, char *line);
int check_mode(char *token, int *mode);
void _push(stack_t **head, char *arg, int *mode);
void _pall(stack_t **head);
void stack_push(stack_t **head, stack_t **new);
void enqueue(stack_t **head, stack_t **new);
#endif
