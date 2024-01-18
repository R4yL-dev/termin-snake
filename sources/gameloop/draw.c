#include "../../includes/termin_snake.h"

static void	render(t_game *game);
static void draw_win_game(t_game *game);
static void draw_win_score(WINDOW *win);

void draw(t_game *game)
{
	draw_win_game(game);
	draw_win_score(game->win.header);
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
	wrefresh(win);
}

static void draw_win_score(WINDOW *win)
{
	box(win, 0, 0);
	mvwprintw(win, 1, 1, "SCORE : 0");
	wrefresh(win);
}
