#include "../../includes/termin_snake.h"

static int	is_outside(t_game *game);
static int	is_eating_himself(t_game *game);

int	snake_has_to_die(t_game *game)
{
	if (is_outside(game) || is_eating_himself(game))
		return 1;
	return 0;
}

static int	is_outside(t_game *game)
{
	int	x_max = getmaxx(game->win.game);
	int	y_max = getmaxy(game->win.game);

	if (game->snake->pos.x < 0 || game->snake->pos.x > x_max - 3 ||\
		game->snake->pos.y < 0 || game->snake->pos.y > y_max - 3)
		return 1;
	else
		return 0;
}

static int	is_eating_himself(t_game *game)
{
	t_vec2	head_pos = {game->snake->pos.x, game->snake->pos.y};
	t_snake	*temp = game->snake;

	temp = temp->next;
	while (temp != NULL)
	{
		if (head_pos.x == temp->pos.x && head_pos.y == temp->pos.y)
			return 1;
		temp = temp->next;
	}
	return 0;
}
