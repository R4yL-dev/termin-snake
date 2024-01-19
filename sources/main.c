#include "../includes/termin_snake.h"

static void	setup_colors(WINDOW *win);

int main(void)
{
	t_game game;
	int ch = ERR;

	game_init(&game);
	setup_colors(game.win.main);
	while (1)
	{
		ch = wgetch(game.win.main);
		if (ch != ERR)
			handler(&game, ch);
		update(&game);
		draw(&game);
	}
	return 0;
}

static void	setup_colors(WINDOW *win)
{
	start_color();
	init_pair(1, COLOR_WHITE, COLOR_BLACK);
	init_pair(2, COLOR_GREEN, COLOR_BLACK);
	init_pair(3, COLOR_RED, COLOR_BLACK);
	wbkgd(win, COLOR_PAIR(1));
}
