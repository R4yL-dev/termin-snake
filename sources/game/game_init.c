#include "../../includes/termin_snake.h"

static void	init_max(t_game *game);
static void init_snake(t_game *game);

void	game_init(t_game *game)
{
	winlist_init(&game->win);
	init_max(game);
	init_snake(game);
}

static void	init_max(t_game *game)
{
	game->max.y = getmaxy(game->win.main);
	game->max.x = getmaxx(game->win.main);
}

static void init_snake(t_game *game)
{
	int	x_mid = getmaxx(game->win.game) / 2;
	int	y_mid = getmaxy(game->win.game) / 2;

	if (x_mid > y_mid)
	{
		game->direction.x = -1;
		game->direction.y = 0;
	}
	else
	{
		game->direction.x = 0;
		game->direction.y = -1;
	}
	game->snake = snake_init(x_mid, y_mid, game->direction);
}
