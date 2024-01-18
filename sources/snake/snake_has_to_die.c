#include "../../includes/termin_snake.h"

int	snake_has_to_die(t_game *game)
{
	int	x_max = getmaxx(game->win.game);
	int	y_max = getmaxy(game->win.game);

	if (game->snake->pos.x < 0 || game->snake->pos.x > x_max - 3 ||\
		game->snake->pos.y < 0 || game->snake->pos.y > y_max - 3)
		return 1;
	else
		return 0;
}
