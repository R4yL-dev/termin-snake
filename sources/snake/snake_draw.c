#include "../../includes/termin_snake.h"

void	snake_draw(t_snake *head, WINDOW *win)
{
	t_snake *temp = head;
	int i = 0;

	while (temp != NULL)
	{
		if (i == 0)
		{
			mvwaddch(win, temp->pos.y + 1, temp->pos.x + 1, '@');
			++i;
		}
		else
			mvwaddch(win, temp->pos.y + 1, temp->pos.x + 1, '#');
		temp = temp->next;
	}
}
