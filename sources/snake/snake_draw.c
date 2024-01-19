#include "../../includes/termin_snake.h"

void	snake_draw(t_snake *head, WINDOW *win)
{
	t_snake *temp = head;
	int i = 0;

	wattron(win, COLOR_PAIR(2));
	while (temp != NULL)
	{
		if (i == 0)
		{

			wattron(win, A_BOLD);
			mvwaddch(win, temp->pos.y + 1, temp->pos.x + 1, '@');
			wattroff(win, A_BOLD);
			++i;
		}
		else
			mvwaddch(win, temp->pos.y + 1, temp->pos.x + 1, '#');
		temp = temp->next;
	}
	wattroff(win, COLOR_PAIR(2) | A_REVERSE);
}
