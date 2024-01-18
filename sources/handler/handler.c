#include "../../includes/termin_snake.h"

void	handler(t_game *game, int ch)
{
	switch (ch)
	{
		case KEY_F(1):
			handler_quit(game);
			break;
		case KEY_UP:
			if (game->direction.y != 1)
				handler_up(game);
			break;
		case KEY_DOWN:
			if (game->direction.y != -1)
				handler_down(game);
			break;
		case KEY_RIGHT:
			if (game->direction.x != -1)
				handler_right(game);
			break;
		case KEY_LEFT:
			if (game->direction.x != 1)
				handler_left(game);
			break;
		default:
			break;
	}
}
