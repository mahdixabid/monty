#include "monty.h"
/**
 * parse_line - parses a line into tokens. tokens separated by " " and "\n".
 * only first two tokens will be returned if successful.
 * @line: buffer from getline in readfile() in monty.c.
 *
 * Return: null-terminated array of tokens, or NULL
 */
char **parse_line(char *line)
{
	char *token, **tokens;
	unsigned int i;

	tokens = malloc(sizeof(char *) * 3);
	if (tokens == NULL)
	{
		printf("Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	token = strtok(line, " '\n'");
	if (token == NULL)
	{
		free(tokens);
		return (NULL);
	}
	i = 0;
	while (token != NULL && i < 2)
	{
		tokens[i] = token;
		token = strtok(NULL, " '\n'");
		i++;
	}
	tokens[i] = NULL;
	return (tokens);
}
