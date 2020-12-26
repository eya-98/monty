#include "monty.h"
/**
 *_read - read function
 *@argv: args value
 *@g_head: pointer to first node
 *Return: void
 */
void _read(char *n, stack_t **g_head)
{
char *line = NULL, *command, *token;
int num, to_push;
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
command = strtok(line, DELIMS);
num++;
if (command != NULL)
{
if (strcmp(command, "push") == 0)
{
token = strtok(NULL, DELIMS);
if (_isdigit(token) == 0)
fprintf(stderr, "erreur à fixer");
else 
{
to_push = atoi(token);
if (!to_push || to_push < 0)
printf("L%d: usage: push integer\n", num);
else
push(g_head, to_push);
}
}
else
_parse(g_head, command, num);
}
}
if (line != NULL)
free(line);
fclose(op);
}
