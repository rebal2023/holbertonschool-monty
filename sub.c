#include "monty.h"

/**
* op_sub - function that subtract 2 elements from top of stack
* @stack: pointer to the head of the stack
* @line_number: number of the current line
*
* Return: the number of nodes
*/
void op_sub(stack_t **stack, unsigned int line_number)
{
size_t n = 0;
stack_t *temp = *stack;

line_number = line_number;
n = calc_len(var.stack_head);
if (n < 2)
{
freehead(var.stack_head);
free(var.getl_info);
fclose(var.fp_struct);
fprintf(stderr, "L%u: can't sub, stack too short\n", var.n_lines);
exit(EXIT_FAILURE);
}
if (*stack != NULL)
{
*stack = (*stack)->next;
(*stack)->n = (*stack)->n - (*stack)->prev->n;
(*stack)->prev = NULL;
free(temp);
}
}
