#include "monty.h"
/**
 * pint - printer
 * @g_head: pointer to the first node
 * @num: line counter
 * Return: void
 */
void pint(stack_t **g_head, int num)
{
if (*g_head == NULL )
{
fprintf(stderr,"L%i: can't pint, stack empty\n",num);
exit(EXIT_FAILURE);
}
printf("%i\n", (*g_head)->n);
}
