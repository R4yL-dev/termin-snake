#include "../../includes/termin_snake.h"

static void	init_main(t_winlist *winlist);
static void	init_header(WINDOW **new_win, WINDOW *main);
static void	init_game(WINDOW **new_win, WINDOW *main);

void	winlist_init(t_winlist *winlist)
{
	init_main(winlist);
	init_header(&winlist->header, winlist->main);
	init_game(&winlist->game, winlist->main);
}

static void	init_main(t_winlist *winlist)
{
	winlist->main = initscr();
	cbreak();
	noecho();
	curs_set(FALSE);
	keypad(winlist->main, TRUE);
	nodelay(winlist->main, TRUE);
}

static void	init_header(WINDOW **new_win, WINDOW *main)
{
	*new_win = newwin(3, getmaxx(main), 0, 0);
}

static void	init_game(WINDOW **new_win, WINDOW *main)
{
	*new_win = newwin(getmaxy(main) - 3, getmaxx(main), 3, 0);
}
