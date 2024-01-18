#include "../../includes/termin_snake.h"

void	update(t_game *game)
{
	snake_move(game->snake, game->direction);
}
