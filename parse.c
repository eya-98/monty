#include "monty.h"
/**
 *
 *
 *
 */
int parse(stack_t g_head, char *commmand, int num, char *string)
{
  insctruction_t cmd [] = {
    {"push", push},
    {"pall", pall}
  }
for (i = 0; cmd[i].opcode; i++)
{
if (strcmd(command, cmd[i].opcode) == 0)
{
  cmd[i].f(g_head, num)
    return;
}
}
 if (strlen(command) != 0 && command[0] != "#" || strcmd(command, cmd[i - 1]) != 0)
{ 
printf("L%u: unknown instruction %s\n", num, command);
exit(EXIT_FAILURE);
}
}
