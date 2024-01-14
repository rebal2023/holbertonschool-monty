#include "monty.h"

/**
* op_swap - function that swaps the top two elements of the stack
* @stack: pointer to the head of the stack
* @line_number: number of the current line
*
* Return: Nothing
*/
void op_swap(stack_t **stack, unsigned int line_number)
{
int tmp = 0;

if ((*stack) == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
free(var.getl_info);
fclose(var.fp_struct);
freehead((*stack));
exit(EXIT_FAILURE);
}

tmp = (*stack)->n;
(*stack)->n = (*stack)->next->n;
(*stack)->next->n = tmp;
}
