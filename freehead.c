#include "monty.h"

/**
* freehead - deallocate memory occupied by a doubly linked list
* @head: head of the linked list
*
* Return: Nothing
*/
void freehead(stack_t *head)
{
stack_t *tmp_1 = NULL, *tmp_2 = NULL;

if (head == NULL)
{
return;
}
tmp_1 = head->next;
while (tmp_1 != NULL)
{
tmp_2 = tmp_1->next;
free(tmp_1);
tmp_1 = tmp_2;
}
free(head);
}
