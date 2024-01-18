#ifndef SNAKE_H
#define SNAKE_H

t_snake	*snake_init(int x, int y, t_vec2 direction);
void	snacke_delete(t_snake *head);
void	snake_move(t_snake *snake, t_vec2 direction);
void	snake_draw(t_snake *head, WINDOW *win);

#endif
