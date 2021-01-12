# Name of the program.
NAME     := whatever

# Sources and objects.
SRCS     := whatever.cpp
OBJS     := $(SRCS:.cpp=.o)

# Define all the compiling flags.
CC      := g++
CFLAGS := -Wall -Werror -Wextra

################################################################
all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re:     fclean all

.PHONY: all clean fclean format re