#include "../../includes/termin_snake.h"

void	draw_gameover(t_game *game)
{
	int height = 4;
	int width = 20;
	int starty = (LINES - height) / 2;
	int startx = (COLS - width) / 2;

	game->win.gameover = newwin(height, width, starty, startx);
	box(game->win.gameover, 0, 0);
	mvwprintw(game->win.gameover, 1, (width - 9) / 2, "Game Over");
	mvwprintw(game->win.gameover, 2, (width - 9) / 2, "Score : %d", game->score);
	wrefresh(game->win.gameover);
	wgetch(game->win.gameover);
	delwin(game->win.gameover);
	game->win.gameover = NULL;
}
