#include "monty.h"

/**
 * split_str - fucntion that sepearates opcodes
 * @str_to_split: string to check
 *
 * Return: string splitted
 */
char *split_str(char *str_to_split)
{
char *op_code = NULL;
char *argument = NULL;

op_code = strtok(str_to_split, " \n\t");
if (strcmp(op_code, "push") == 0)
{
argument = strtok(NULL, " \n\t");
is_digit(argument);
var.node_data = atoi(argument);
}
return (op_code);
}
