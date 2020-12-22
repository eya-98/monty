#include "monty.h"
#include <studio.h>
/**
 * 
 * 
 * 
 * 
 */
void pint(stack **g_head,int num)
{
if (*g_head == NULL )
{
fprintf(stderr,"L%i: can't pint, stack empty\n",num);
exit(EXIT_FAILURE);
}
printf("%i\n", (*g_head)->n);
}