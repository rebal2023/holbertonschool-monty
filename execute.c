#include "monty.h"

/**
* execute - interpreter operations
* @op_code: content line
*
* Return: Nothing
*/
void execute(char *op_code)
{
unsigned int i = 0;
instruction_t opcode_func[] = {
{"push", op_push},
{"pall", op_pall},
{"pint", op_pint},
{"swap", op_swap},
{"pop", op_pop},
{"add", op_add},
{"nop", op_nop},
{"sub", op_sub},
{"div", op_div},
{"mul", op_mul},
{NULL, NULL},
};

while ((opcode_func[i].opcode != NULL))
{
if (strcmp(opcode_func[i].opcode, op_code) == 0)
{
opcode_func[i].f(&var.stack_head, var.n_lines);
return;
}
i++;
}
fprintf(stderr, "L%u: unknown instruction %s\n", var.n_lines, op_code);
free(var.getl_info);
freehead(var.stack_head);
fclose(var.fp_struct);
exit(EXIT_FAILURE);
}
