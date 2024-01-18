#include "../../includes/termin_snake.h"

void	handler_up(t_game *game)
{
	game->direction.x = 0;
	game->direction.y = -1;
}
