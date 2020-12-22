#include "monty.h"
/**
 *push - Add to the top of a list
 *@g_head: pointer to the first node
 *@num: line counter
 *Return: adress of new node
 */
stack_t *push(stack_t **g_head, int num)
{
stack_t *new_node;
char * var;
var = strtok(NULL, "\n\t\r ");
if ((var == NULL) || (isdigit(var)))
{
fprintf(stderr ,"L%u: usage: push integer\n", var);
exit(EXIT_FAILURE);
}
new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{
fprintf(stderr, "Error: malloc failed");
exit(EXIT_FAILURE);
}
new_node->n = atoi(var);
new_node->next = *g_head;
new_node->prev = NULL;
*g_head = new_node;
return (*g_head);
}
