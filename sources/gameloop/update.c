#include "../../includes/termin_snake.h"

void	update(t_game *game)
{
	snake_move(game->snake, game->direction);
	if (snake_can_eat(game->snake, game->food))
	{
		snake_grow(game->snake);
		food_spwan(game);
		game->score++;
	}
	if (snake_has_to_die(game))
	{
		draw_gameover(game);
		handler_quit(game);
	}
}
