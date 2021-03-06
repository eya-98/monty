#ifndef MONTY
#define MONTY
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
FILE *op;
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
stack_t **g_head;
int main(int argc, char **argv);
void _free(stack_t **g_head);
void _nop(stack_t **g_head, unsigned int num);
void _parse(stack_t **g_head, char *commmand, unsigned int num);
void _pint(stack_t **g_head, unsigned int num);
void _pop(stack_t **g_head, unsigned int num);
void _push(stack_t **g_head, unsigned int to_push);
void _swap(stack_t **g_head, unsigned int num);
void _read(char *n, stack_t **g_head);
void _pall(stack_t **g_head, unsigned int num);
int _isdigit(char *c);
void add(stack_t **g_head, unsigned int num);
#endif
