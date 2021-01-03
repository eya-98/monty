#include "monty.h"
/**
 * _pall - print all the values pushed to the stack
 * @g_head : pointer to the stack
 * @num : line number
 */
void _pall(stack_t **g_head, __attribute__((unused)) unsigned int num )
{
stack_t *new;
new = *g_head;
while (new != NULL)
{
printf("%d\n", new->n);
new = new->next;
}
}
