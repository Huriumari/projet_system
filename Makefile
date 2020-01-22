
NAME = superpixmanip
PATH_SRC = ./source/
HEADER = ./include/
FLAG = -std=c11 -Wall -Wextra -Werror -pthread
SRC = $(PATH_SRC)main.c  $(PATH_SRC)functions_img.c
OBJ = main.o


all: $(NAME)

$(NAME):
	gcc-8 $(FLAG) -I $(HEADER) $(SRC) -o $(NAME)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)

re: fclean all
