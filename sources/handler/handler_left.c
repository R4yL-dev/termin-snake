#include "../../includes/termin_snake.h"

void	handler_left(t_game *game)
{
	game->direction.x = -1;
	game->direction.y = 0;
}
