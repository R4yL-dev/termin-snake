#include "../../includes/termin_snake.h"

static void	render(t_game *game);
static void draw_win_game(t_game *game);
static void draw_win_score(t_game *game);

void draw(t_game *game)
{
	draw_win_game(game);
	draw_win_score(game);
	render(game);
}

static void	render(t_game *game)
{
	wnoutrefresh(game->win.header);
	wnoutrefresh(game->win.game);
	doupdate();
	usleep(100000);
}

static void draw_win_game(t_game *game)
{
	WINDOW *win = game->win.game;

	wclear(win);
	box(win, 0, 0);
	snake_draw(game->snake, game->win.game);
	food_draw(game->food, game->win.game);
}

static void draw_win_score(t_game *game)
{
	WINDOW	*win = game->win.header;

	wclear(win);
	box(win, 0, 0);
	mvwprintw(win, 1, 1, "SCORE : %d", game->score);
}
