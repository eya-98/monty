#include "monty.h"
/**
 * swap - swap the top and the second elements of a dlinked lists
 * @g_head: pointer to the first node
 * @num: line counter
 * Return: adress of new node
 */
stack_t swap(stack_t **g_head, int num)
{
stack_t *tmp;
if (*g_head == NULL || (*g_head)->next == NULL)
{
fprint(stderr, "L%i: can't swap, stack too short", num);
exit(EXIT_FAILURE);
}
tmp = (*g_head)->next;
tmp->prev = NULL;
(*g_head)->prev = tmp;
(*g_head)->next = tmp->next;
tmp->next = *g_head;
*g_head = tmp;
return (**g_head);
}
