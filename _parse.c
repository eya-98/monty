#include "monty.h"
/**
 * _parse - line spliter
 *@g_head: pointer to the first node
 *@command: command to execute
 *@num: line counter
 * Return: void
 */
void (*_parse(stack_t **g_head, char *command, unsigned int num))
(stack_t **g_head, unsigned int num)
{
instruction_t cmd[] = {
{"push", _push},
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
fprintf(stderr, "L%u, unkonwn instruction %s\n", num, command);
exit(EXIT_FAILURE);
}
