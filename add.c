#include "monty.h"
/**
 * add - add two node function
 * @g_head: pointer to the head of a list
 * @num: line counter
 * Return: void
 */
void add(stack_t **g_head, unsigned int num)
{
stack_t **h = g_head;
if (!g_head || !(*g_head) || !(*g_head)->next)
{
fprintf(stderr, "L%u: can't add, stack too short\n", num);
exit(EXIT_FAILURE);
}
*g_head = (*g_head)->next;
(*g_head)->n += (*g_head)->prev->n;
_pop(h, num);
}
