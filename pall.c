#include "monty.h"

/**
 * pall - prints all the values on stack
 * starting from the beginning
 * @stack: double pointer to stack
 * @line_no: current line number
 * Return: nothing
 */
void pall(stack_t **stack, unsigned int line_no)
{
  stack_t *temp;

  if (stack == NULL)
    {
      fprintf(stderr, "L%d: invalid stack\n", line_no);
      exit(EXIT_FAILURE);
    }

  temp = *stack;

  while (temp != NULL)
    {
      printf("%d\n", temp->n);
      temp = temp->next;

    }
}
