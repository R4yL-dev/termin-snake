#ifndef SNAKE_H
#define SNAKE_H

t_snake	*snake_init(int x, int y, t_vec2 direction);
void	snacke_delete(t_snake *head);
void	snake_move(t_snake *snake, t_vec2 direction);
int		snake_has_to_die(t_game *game);
void	snake_draw(t_snake *head, WINDOW *win);
void	snake_grow(t_snake *head);
int		snake_can_eat(t_snake *snake, t_vec2 food);

#endif
