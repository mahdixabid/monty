#include "monty.h"
/**
 * main - main function for monty program
 *@ac: argument counter
 *@av: argument vector
 *Return: int
 */
int main(int ac, char **av)
{
	FILE *fp;
	char *line = NULL;
	size_t size = 0;
	ssize_t read;
	stack_t *head = NULL;
	int line_number = 0;

	if (ac < 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fp = fopen(av[1], "r");
	if (fp == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}
	read = getline(&line, &size, fp);
	while (read != -1)
	{
		line_number++;
		parse_line(line);
	}
	free_list(&head, fp, line);
	exit(EXIT_SUCCESS);
}
