#include "monty.h"
/**
 *push - Add to the top of a list
 *@g_head: pointer to the first node
 *@num: line counter
 */
void _push(stack_t **g_head, unsigned int to_push)
{
stack_t *new_node;
new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{
fprintf(stderr, "Error: malloc failed");
exit(EXIT_FAILURE);
}
new_node->n = to_push;
new_node->prev = NULL;
new_node->next = *g_head;
if (*g_head != NULL)
(*g_head)->prev = new_node;
*g_head = new_node;
}
