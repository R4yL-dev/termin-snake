#include "../../includes/termin_snake.h"

void	handler_down(t_game *game)
{
	game->direction.x = 0;
	game->direction.y = 1;
}
