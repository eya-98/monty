#include "monty.h"
/**
 * _parse - line spliter
 *@g_head: pointer to the first node
 *@command: command to execute
 *@num: line counter
 * Return: void
 */
void _parse(stack_t **g_head, char *command, unsigned int num)
{
int i;
instruction_t cmd[] = {
{"push", _push},
{"pall", _pall},
{"pint", _pint},
{"pop", _pop},
{"swap", _swap},
{"nop", _nop},
{"add", add},
{NULL, NULL}
};
for (i = 0; cmd[i].opcode; i++)
{
if (strcmp(command, cmd[i].opcode) == 0)
{
cmd[i].f(g_head, num);
return;
}
}
fprintf(stderr, "L%u: unknown instruction %s\n", num, command);
if (*g_head != NULL)
{
_free(g_head);
}
exit(EXIT_FAILURE);
}
