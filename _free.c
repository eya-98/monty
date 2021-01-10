#include "monty.h"
/**
 * _free - free liner
 * @g_head: pointer to the first node
 * Return: void
 */
void _free(stack_t **g_head)
{

if (*g_head == NULL)
{
_free(&(*g_head)->next);
free(*g_head);
*g_head = NULL;
}
}
