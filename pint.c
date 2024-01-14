#include "monty.h"

/**
* op_pint - Function that prints value at top of the stack
* @stack: pointer to the head of the stack
* @line_number: number of the current line
*
* Return: Nothing
*/
void op_pint(stack_t **stack, unsigned int line_number)
{
if ((*stack) == NULL)
{
fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
free(var.getl_info);
fclose(var.fp_struct);
handle_dlist_head((*stack));
exit(EXIT_FAILURE);
}

printf("%d\n", ((*stack))->n);
}
