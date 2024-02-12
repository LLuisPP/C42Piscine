TARGET = BSQprogram
OBJS = main.o files_loader.o 
CFLAGS = -Wall -Wextra -Werror

$(TARGET) : $(OBJS)
	@gcc $(FLAGS) $(OBJS) -o $(TARGET)

%.o : %.c
	@gcc -c $(FLAGS) $< -o $@

.PHONY: clean
clean:
	@rm -f *.o

fclean:
	@rm -f $(TARGET)

allclean:
	@rm -f *.o $(TARGET)
