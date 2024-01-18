#include "../../includes/termin_snake.h"

void	food_draw(t_vec2 pos, WINDOW *win)
{
	mvwaddch(win, pos.y + 1, pos.x + 1, 'X');
}
