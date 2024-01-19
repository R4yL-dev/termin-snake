#include "../../includes/termin_snake.h"

int	snake_can_eat(t_snake *snake, t_vec2 food)
{
	if (snake->pos.x == food.x && snake->pos.y == food.y)
		return 1;
	return 0;
}
