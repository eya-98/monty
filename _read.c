#include "monty.h"
/**
 *
 *
 *
 *
 */
void _read(char **argv, stack_t g_head)
{
char *line = NULL, *command, *string;
int num, op, i, j, n = 0;
size_t len;
string = malloc(sizeof(char *));
if string == NULL
return;
op = open(argv[1], O_RDONLY)
if (op == NULL)
{
printf("Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
while (getline(&line, &len, op) != -1)
{
command = strtok(line, " ");
num++;
)
if (command != NULL)
parse(g_head, commmand, num, string) 
}
if (line != NULL)
free(line)
close(op);
}

