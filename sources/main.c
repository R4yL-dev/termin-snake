#include "../includes/termin_snake.h"

int main(void)
{
	t_game game;
	int ch = ERR;

	game_init(&game);
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
