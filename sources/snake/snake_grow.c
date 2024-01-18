#include "../../includes/termin_snake.h"

void	snake_grow(t_snake *head)
{
	t_snake	*temp = head;
	t_snake *new_node;

	new_node = malloc(sizeof(t_snake));
	if (!new_node)
		return ;
	while (temp->next != NULL)
		temp = temp->next;
	new_node->pos.x = temp->pos.x;
	new_node->pos.y = temp->pos.y;
	new_node->next = NULL;
	temp->next = new_node;
}
