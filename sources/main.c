#include "../includes/termin_snake.h"

int main(void)
{
	t_game game;
	int ch = ERR;

	game_init(&game);
	timeout(0);
	while (1)
	{
		ch = wgetch(game.win.main);
		if (ch != ERR)
			handler(&game, ch);
		if (!game.is_paused)
		{
			update(&game);
			draw(&game);
		}
		else
			draw_pause(&game);
	}
	return 0;
}
