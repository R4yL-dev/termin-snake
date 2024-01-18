#include "../../includes/termin_snake.h"

static t_vec2	get_random_pos(WINDOW *win);
static int	is_valide_pos(t_game *game, t_vec2 pos);

void	food_spwan(t_game *game)
{
	t_vec2	rdn_pos;

	rdn_pos = get_random_pos(game->win.game);
	while (!is_valide_pos(game, rdn_pos))
		rdn_pos = get_random_pos(game->win.game);
	game->food.x = rdn_pos.x;
	game->food.y = rdn_pos.y;
}

static t_vec2	get_random_pos(WINDOW *win)
{
	int	x;
	int	y;

	x = rand() % (getmaxx(win) - 2);
	y = rand() % (getmaxy(win) - 2);
	return (t_vec2){x, y};
}

static int	is_valide_pos(t_game *game, t_vec2 pos)
{
	t_snake	*temp = game->snake;

	while (temp != NULL)
	{
		if (temp->pos.x == pos.x && temp->pos.y == pos.y)
			return 0;
		temp = temp->next;
	}
	return 1;
}
