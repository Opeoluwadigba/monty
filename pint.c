#include "monty.h"

/**
 * pint - prints the value at the start of the stack
 * @stack: double pointer to stack
 * @line_no: current position of operation code
 * monty file
 * Return: nothing
 */
void pint(stack_t **stack, unsigned int line_no)
{
  if (stack == NULL || *stack == NULL)
    {
      fprintf(stderr, "L%d: can't pint, stack empty\n", line_no);
      exit(EXIT_FAILURE);
    }

  printf("%d\n", (*stack)->n);
}
