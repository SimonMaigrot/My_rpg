##
## EPITECH PROJECT, 2023
## my_hunter
## File description:
## Makefile
##

SRC	=	src/main.c	\
		src/display.c 	\
		src/events.c	\
		src/info.c	\
		src/my_strncmp.c	\
		src/loop.c	\
		src/my_putstr.c	\
		src/my_putchar.c	\
		src/load/load_backgrounds.c	\
		src/load/load_sprites.c	\
		src/load/load_texts.c

OBJ	=	${SRC:.c=.o}

NAME	=	my_hunter

CFLAGS	=	-W -Wall -Wextra

CPPFLAGS	=	-I./include/

GRAPHICS	=	-lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) -g $(CFLAGS) $(OBJ) $(GRAPHICS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all clean
