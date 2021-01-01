#include "monty.h"
/**
 * _pall - print all the values pushed to the stack
 * @g_head : pointer to the stack
 * @num : line number
 */
void _pall(stack_t **g_head, __attribute__((unused)) unsigned int num )
{
stack_t *new = *g_head;
while (new)
{
printf("%d", new->n);
new = new->next;
}
}
