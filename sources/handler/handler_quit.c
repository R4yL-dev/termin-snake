#include "../../includes/termin_snake.h"

void	handler_quit(t_game *game)
{
	game_delete(game);
	exit(EXIT_SUCCESS);
}
