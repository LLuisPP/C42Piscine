NAME = bsq
SRCS = main.c bsq.c get_file_size.c read_map_file.c sqr_creator.c sqr_point_generator.c
CC = cc
CFLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address

OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	RM $(OBJS)

fclean:
	RM $(OBJS) $(NAME)

.PHONY: clean
