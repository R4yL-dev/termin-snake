#include "../../includes/termin_snake.h"

void	game_delete(t_game *game)
{
	winlist_delete(game->win);
	snacke_delete(game->snake);
}
