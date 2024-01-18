NAME		:= termin_snake

SRCS 		:= \
	sources/game/game_init.c \
	sources/game/game_delete.c \
	sources/winlist/winlist_init.c \
	sources/winlist/winlist_delete.c \
	sources/snake/snake_init.c \
	sources/snake/snake_delete.c \
	sources/snake/snake_move.c \
	sources/snake/snake_has_to_die.c \
	sources/snake/snake_draw.c \
	sources/snake/snake_grow.c \
	sources/handler/handler.c \
	sources/handler/handler_quit.c \
	sources/handler/handler_up.c \
	sources/handler/handler_down.c \
	sources/handler/handler_right.c \
	sources/handler/handler_left.c \
	sources/gameloop/update.c \
	sources/gameloop/draw.c \
	sources/food/food_spawn.c \
	sources/food/food_draw.c \
	sources/main.c

OBJS		:= $(SRCS:.c=.o)

CC 			:= gcc
CFLAGS		:= -Wall -Wextra -Werror -g #-fsanitize=address,undefined
CPPFLAGS	:= -I./includes -lncurses


RM			:= rm -f
MAKEFLAGS   += --no-print-directory

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) $(CPPFLAGS) -o $(NAME)
	$(info CREATED $(NAME))

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@
	$(info CREATED $@)

clean :
	$(RM) $(OBJS)
	$(info DELETED objects files)

fclean : clean
	$(RM) $(NAME)
	$(info DELETED $(NAME))

re :
	$(MAKE) fclean
	$(MAKE) all

info-%:
	$(MAKE) --dry-run --always-make $* | grep -v "info"

.PHONY : clean fclean re info-
.SILENT :
