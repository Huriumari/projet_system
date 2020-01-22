
NAME = superpixmanip
PATH_SRC = ./source/
HEADER = ./include/
FLAG = -Wall -Wextra -Werror -pthread
SRC = $(PATH_SRC)main.c
OBJ = main.o
LIB = -std=c11


all: $(NAME)

$(NAME):
	gcc-8 $(FLAG) -I $(HEADER) $(SRC) -o $(NAME) $(LIB)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)

re: fclean all
