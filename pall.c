#include "monty.h"
/**
 * pall - print all the values pushed to the stack
 * @g_head : pointer to the stack
 * @num : line number
 */
void pall(stack_t **g_head, int num)
{
if (*g_head == NULL)
{
fprintf("L %u: usage: push intege", num);
exit(EXIT_FAILURE);
}
while (*g_head)
{
printf("%d", (*g_head)->n);
*g_head = (*g_head)->next;
}
}
