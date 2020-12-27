#include "monty.h"
/**
 * _isdigit - main function
 *
 *@c: variable input
 *
 *Return: depends on the outcome of c
 *
 */
int _isdigit(char *c)
{
unsigned int i;
for (i = 0; i < strlen(c); i++)
{
if (c[0] == '-')
i++;
if (c[i] >= '0' && c[i] <= '9')
{
return (1);
}
}
return (0);
}
