NAME = rush-02
SRCS = main.c lucky_search.c default_search.c decoder.c array_reverse.c
CC = cc
CFLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address

all: $(NAME)
	ar -rc $(NAME)

OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo PROGRAMA ++++ $(NAME) ++++ CREADO

OBJS = $(SRCS:.c=.o)

clean:
	@RM -rf $(OBJS) || true
	@echo ELIMINADO/S ---- $(OBJS) ----

fclean:
	@RM -rf $(OBJS) $(NAME) || true
	@echo SE HAN ELIMINADO ---- $(NAME) ---- $(OBJS) ----

re:
	@RM -rf $(NAME)
	make

.PHONY: fclean clean
