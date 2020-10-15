# Name of the program.
NAME     := minitel

# Sources and objects.
SRCS     := ClassName.cpp \
					minitel.cpp
OBJS     := $(SRCS:.cpp=.o)

# Header.

HDR = ClassName.hpp

# Define all the compiling flags.
CC      := g++
CFLAGS := -Wall -Werror -Wextra

################################################################
all: $(NAME)

$(NAME): $(OBJS) $(HDR)
	@$(CC) $(CFLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re:     fclean all

.PHONY: all clean fclean format re