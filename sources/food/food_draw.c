#include "../../includes/termin_snake.h"

void	food_draw(t_vec2 pos, WINDOW *win)
{
	wattron(win, COLOR_PAIR(3) | A_BOLD);
	mvwaddch(win, pos.y + 1, pos.x + 1, 'O');
	wattroff(win, COLOR_PAIR(3) | A_BOLD);
}
