#include "monty.h"
/**
 *_read - read function
 *@argv: args value
 *@g_head: pointer to first node
 *Return: void
 */
void _read(char **argv, stack_t **g_head)
{
char *line = NULL, *command, *string;
int num;
FILE *op;
size_t len;
string = malloc(sizeof(char *));
if (string == NULL)
{
fprintf(stderr, "Error: malloc failed");
exit(EXIT_FAILURE);
}
op = fopen(argv[1], "r");
if (op == NULL)
{
printf("Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
while (getline(&line, &len, op) != -1)
{
command = strtok(line, " ");
num++;
if (command != NULL)
_parse(g_head, command, num);
}
if (line != NULL)
free(line);
fclose(op);
}
