#include "../../includes/termin_snake.h"

void	update(t_game *game)
{
	snake_move(game->snake, game->direction);
	if (snake_has_to_die(game))
		handler_quit(game);
}
