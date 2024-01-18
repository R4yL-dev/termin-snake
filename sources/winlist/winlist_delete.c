#include "../../includes/termin_snake.h"

void	winlist_delete(t_winlist winlist)
{
	delwin(winlist.header);
	delwin(winlist.game);
	delwin(winlist.main);
	endwin();
}
