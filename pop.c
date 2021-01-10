#include "monty.h"
#include <stdio.h>
/**
 * _pop - delete top
 * @g_head: pointer ro the first node
 * @num: line counter
 * Return: void
 */
void _pop(stack_t **g_head, unsigned int num)
{
stack_t *tmp;
if (!(*g_head) || !g_head)
{
fprintf(stderr, "L%i: can't pop an empty stack\n", num);
exit(EXIT_FAILURE);
}
tmp = *g_head;
*g_head = (*g_head)->next;
(*g_head)->prev = NULL;
free(tmp);
}
