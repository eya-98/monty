#include "monty.h"
/**
 *
 *
 *
 */
stack_t push(stack_t **g_head, int num)
{
stack_t *new_node; 
var = strtok(NULL, "\n\t\r ");
if ((var == NULL) || (isdigit(var)))
{
dprintf("L%u: usage: push integer\n", var);
exit(EXIT_FAILURE)
}
new_node = malloc(sizeof(stack_t))
if (new_node == NULL)
{
dprintf("Error: malloc failed");
exit(EXIT_FAILURE)
}
new_node->n = atoi(var);
new_node->next = *g_head;
new_node->prev = NULL;
*g_head = new_node;
return (*g_head);
}
