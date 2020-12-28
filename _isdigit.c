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
unsigned int i = 0;
if (c[0] == '-')
i++;
while (c[i])
{
if (c[i] >= '0' && c[i] <= '9')
i++;
else 
return (1);
}
return (0);
}
