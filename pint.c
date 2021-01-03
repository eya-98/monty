#include "monty.h"
/**
 * _pint - printer
 * @g_head: pointer to the first node
 * @num: line counter
 * Return: void
 */
void _pint(stack_t **g_head, unsigned int num)
{
stack_t *head = *g_head;
if (*g_head == NULL)
{
fprintf(stderr, "L%u: can't pint, stack empty\n", num);
exit(EXIT_FAILURE);
}
printf("%d\n", head->n);
}
