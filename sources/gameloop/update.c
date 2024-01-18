#include "../../includes/termin_snake.h"

static int	can_eat(t_game *game);

void	update(t_game *game)
{
	snake_move(game->snake, game->direction);
	if (can_eat(game))
	{
		snake_grow(game->snake);
		food_spwan(game);
	}
	if (snake_has_to_die(game))
		handler_quit(game);
}

static int	can_eat(t_game *game)
{
	if (game->snake->pos.x == game->food.x && \
		game->snake->pos.y == game->food.y)
		return 1;
	return 0;
}
