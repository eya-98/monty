#include "monty.h"
/**
 *main - main function of stack and queue
 *@argc: number of arguments
 *@argv: value of arguments
 *Return: 0
 */
int main(int argc, char **argv)
{
stack_t *head;
if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
head = NULL;
g_head = &head;
_read(argv[1], g_head);
_free(g_head);
free(head);
exit(EXIT_SUCCESS);
}
