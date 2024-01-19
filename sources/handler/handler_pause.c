#include "../../includes/termin_snake.h"

void	handler_pause(t_game *game)
{
	game->is_paused = !game->is_paused;
	if (game->is_paused == 1)
	{
		game->win.pause = newwin(3, 20, (LINES - 3) / 2, (COLS - 20) / 2);
		box(game->win.pause, 0, 0);
		mvwprintw(game->win.pause, 1, (20 - 9) / 2, "PAUSE");
		wrefresh(game->win.pause);
	}
	else
	{
		delwin(game->win.pause);
		game->win.pause = NULL;
	}
}
