#include "monty.h"
/**
 * parse - line spliter
 *@command: command to execute
 *@g_head: pointer to the first node
 *@num: line counter
 */
void parse(stack_t g_head, char *commmand, int num)
{
instruction_t cmd [] = {
{"push", push},
{"pall", pall}
};
int i;
char * command;

for (i = 0; cmd[i].opcode; i++)
{
if (strcmd(command, cmd[i].opcode) == 0)
{
cmd[i].f(g_head, num);
}
}
if (strlen(command) != 0 && command[0] != "#" || strcmd(command, cmd[i - 1]) != 0)
{ 
printf("L%u: unknown instruction %s\n", num, command);
exit(EXIT_FAILURE);
}
}
