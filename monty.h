#ifndef MONTY
#define MONTY
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void nop(__attribute__((unused))stack_t **g_head,__attribute__((unused)) int num);
int parse(stack_t g_head, char *commmand, int num, char *string);
void pint(stack **g_head,int num)
void pop(stack_t **g_head, int num)
stack_t push(stack_t **g_head, int num)
stack_t swap(stack_t **g_head, int num)
void _read(char **argv, stack_t g_head)

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

#endif
