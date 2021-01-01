#include "monty.h"
/**
 * _pint - printer
 * @g_head: pointer to the first node
 * @num: line counter
 * Return: void
 */
void _pint(stack_t **g_head, unsigned int num)
{
if (*g_head == NULL)
{
fprintf(stderr, "L%i: can't pint, stack empty\n", num);
exit(EXIT_FAILURE);
}
printf("%d\n", (*g_head)->n);
}
