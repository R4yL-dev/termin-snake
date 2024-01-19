#include "../../includes/termin_snake.h"

static int	can_eat(t_game *game);
static void	show_gameover(t_game *game);

void	update(t_game *game)
{
	snake_move(game->snake, game->direction);
	if (can_eat(game))
	{
		snake_grow(game->snake);
		food_spwan(game);
		game->score++;
	}
	if (snake_has_to_die(game))
	{
		show_gameover(game);
		handler_quit(game);
	}
}

static int	can_eat(t_game *game)
{
	if (game->snake->pos.x == game->food.x && \
		game->snake->pos.y == game->food.y)
		return 1;
	return 0;
}

static void	show_gameover(t_game *game)
{
	int height = 4;
	int width = 20;
	int starty = (LINES - height) / 2;
	int startx = (COLS - width) / 2;

	WINDOW *win = newwin(height, width, starty, startx);
	box(win, 0, 0);
	mvwprintw(win, 1, (width - 9) / 2, "Game Over");
	mvwprintw(win, 2, (width - 9) / 2, "Score : %d", game->score);
	wrefresh(win);
	wgetch(win);
	delwin(win);
}
