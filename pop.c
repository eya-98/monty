#include "monty.h"
#include <stdio.h>
/**
 * 
 * 
 * 
 * 
 */
void pop(stack_t **g_head, int num)
{
stack_t *tmp;
if (*g_head == NULL)
{
fprintf(stderr, "L%i: can't pop an empty stack\n",num);
exit (EXIT_FAILURE);
}
tmp = *g_head;
*g_head = (*g_head)->next
(*g_head)->prev = NULL;
free(tmp);
}