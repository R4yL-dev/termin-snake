#include "../../includes/termin_snake.h"

void	snake_move(t_snake *snake, t_vec2 direction)
{
	t_snake *temp = snake;
	t_vec2 last_pos = temp->pos, new_pos;

	// Déplacer la tête du serpent dans la direction actuelle
	temp->pos.x += direction.x;
	temp->pos.y += direction.y;

	temp = temp->next;
	// Déplacer chaque segment à la position du segment précédent
	while (temp != NULL)
	{
		new_pos = temp->pos;
		temp->pos = last_pos;
		last_pos = new_pos;
		temp = temp->next;
	}
}
