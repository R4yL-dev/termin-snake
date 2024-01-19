#include "../../includes/termin_snake.h"

void	draw_pause(t_game *game)
{
	game->win.pause = newwin(3, 11, (LINES - 3) / 2, (COLS - 11) / 2);
	box(game->win.pause, 0, 0);
	mvwprintw(game->win.pause, 1, 3, "PAUSE");
	wrefresh(game->win.pause);
}
