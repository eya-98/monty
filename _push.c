#include "monty.h"
/**
 *_push - Add to the top of a list
 *@g_head: pointer to the first node
 *@num: line counter
 */
void _push(stack_t **g_head, unsigned int num)
{
stack_t *new_node;
char *arg;
new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{
fprintf(stderr, "Error: malloc failed");
exit(EXIT_FAILURE);
}
arg = strtok(NULL, "\n\t\r ");
if (_isdigit(arg) == 1)
{
fprintf(stderr, "L%u: usage: push integer\n", num);
exit(EXIT_FAILURE);
}
new_node->n = atoi(arg);
new_node->prev = NULL;
new_node->next = *g_head;
if (*g_head != NULL)
(*g_head)->prev = new_node;
*g_head = new_node;
}
