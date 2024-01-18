#include "../../includes/termin_snake.h"

t_snake	*snake_init(int x, int y, t_vec2 direction)
{
	t_snake	*head = NULL;
	t_snake	*temp = NULL;
	t_snake	*new_node = NULL;
	int		i = 0;

	while (i < 3)
	{
		new_node = malloc(sizeof(t_snake));
		if (!new_node)
			return NULL;
		new_node->pos.x = x - i * direction.x;
		new_node->pos.y = y - i * direction.y;
		new_node->next = NULL;
		if (head == NULL)
			head = new_node;
		else
		{
			temp = head;
			while (temp->next != NULL)
				temp = temp->next;
			temp->next = new_node;
		}
		++i;
	}
	return head;
}
