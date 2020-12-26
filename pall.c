#include "monty.h"
/**
 * pall - print all the values pushed to the stack
 * @g_head : pointer to the stack
 * @num : line number
 */
void pall(stack_t **g_head, int num)
{
stack_t *new = *g_head;
if (*g_head == NULL)
{
fprintf(stderr, "L %u: usage: push intege", num);
exit(EXIT_FAILURE);
}
while (new)
{
printf("%d", (*g_head)->n);
new = new->next;
}
}
