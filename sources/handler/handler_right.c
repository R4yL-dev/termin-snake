#include "../../includes/termin_snake.h"

void	handler_right(t_game *game)
{
	game->direction.x = 1;
	game->direction.y = 0;
}
