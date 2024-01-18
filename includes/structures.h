#ifndef STRUCTURES_H
#define STRUCTURES_H

#include <ncurses.h>

typedef struct s_vec2 t_vec2;
typedef struct s_snake t_snake;
typedef struct s_winlist t_winlist;
typedef struct s_game t_game;

typedef struct s_vec2 {
	int	x;
	int	y;
}	t_vec2;

typedef struct s_snake {
	t_vec2	pos;
	t_snake *next;
}	t_snake;

typedef struct s_winlist {
	WINDOW	*main;
	WINDOW	*header;
	WINDOW	*game;
}	t_winlist;

typedef struct s_game {
	t_winlist	win;
	t_snake		*snake;
	t_vec2		max;
	t_vec2		food;
	t_vec2		direction;
}	t_game;

#endif
