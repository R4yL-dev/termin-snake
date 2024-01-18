#include "../../includes/termin_snake.h"

void	snacke_delete(t_snake *head)
{
	t_snake	*temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
