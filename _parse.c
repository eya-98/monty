#include "monty.h"
/**
 * parse - line spliter
 *@command: command to execute
 *@g_head: pointer to the first node
 *@num: line counter
 *Return: void
 */
void (*_parse(stack_t **g_head, char *command, unsigned int num))(stack_t **g_head, unsigned int num)
{
instruction_t cmd[] = {
{"pall", _pall},
{"pint", _pint},
{"pop", _pop},
{"swap", _swap},
{NULL, NULL}
};
int i;
for (i = 0; cmd[i].opcode != NULL; i++)
{
if (strcmp(command, cmd[i].opcode) == 0)
{
cmd[i].f(g_head, num);
break;
}
}
if ((strlen(command) != 0) && (command[0] != '#'))
{ 
printf("L%u: unknown instruction %s\n", num, command);
exit(EXIT_FAILURE);
}
exit(EXIT_SUCCESS);
}
