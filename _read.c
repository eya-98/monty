#include "monty.h"
/**
 *_read - read function
 *@argv: args value
 *@g_head: pointer to first node
 *Return: void
 */
void _read(char *n, stack_t **g_head)
{
char *line = NULL, *command;
unsigned int num;
FILE *op;
size_t len;
op = fopen(n, "r");
if (op == NULL)
{
fprintf(stderr, "Error: Can't open file %s\n", n);
exit(EXIT_FAILURE);
}
while (getline(&line, &len, op) != -1)
{
command = strtok(line, "\n\t\r ");
num++;
if (command != NULL && command[0] != '#')
{
_parse(g_head, command, num);
}
}
if (line != NULL)
{
free(line);
fclose(op);
}
exit(EXIT_SUCCESS);
}