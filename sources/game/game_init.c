#include "../../includes/termin_snake.h"

static void	init_max(t_game *game);
static void init_snake(t_game *game);
static void	setup_colors(WINDOW *win);

void	game_init(t_game *game)
{
	srand(time(NULL));
	winlist_init(&game->win);
	init_max(game);
	init_snake(game);
	food_spwan(game);
	game->score = 0;
	game->is_paused = 0;
	setup_colors(game->win.main);
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

static void	setup_colors(WINDOW *win)
{
	start_color();
	init_pair(1, COLOR_WHITE, COLOR_BLACK);
	init_pair(2, COLOR_GREEN, COLOR_BLACK);
	init_pair(3, COLOR_RED, COLOR_BLACK);
	wbkgd(win, COLOR_PAIR(1));
}
