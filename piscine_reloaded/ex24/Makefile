NAME = libft.a
RM = rm -f
CC = cc
CFLAGS = -Wall -Wextra -Werror -I includes
SRCS = ./srcs/*.c
OBJS = *.o

all: $(NAME)

$(NAME): $(OBJS)
	@ar -rc $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)

clean:
	@$(RM) $(OBJS)

fclean:
	@$(RM) $(OBJS) $(NAME)

re:
	@$(RM) $(NAME)
	make

.PHONY: all clean fclean re
