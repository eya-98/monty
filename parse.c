#include "monty.h"
/**
 * parse - line spliter
 *@command: command to execute
 *@g_head: pointer to the first node
 *@num: line counter
 */
void _parse(stack_t **g_head, char *command, int num)
{
instruction_t cmd[] = {
{"pall", pall},
{"pint", pint},
{"pop", pop},
{"swap", swap},
{NULL, NULL}
};
int i;
for (i = 0; cmd[i].opcode; i++)
{
if (strcmp(command, cmd[i].opcode) == 0)
{
(cmd[i].f)(g_head, num);
return;
}
}
if ((strlen(command) != 0) && (command[0] != '#'))
{ 
printf("L%u: unknown instruction %s\n", num, command);
exit(EXIT_FAILURE);
}
}
