NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

SRC = $(shell find . -name "*.c" ! -name "*_bonus.c")
BONUS_SRC = $(shell find . -name "*_bonus.c")

BONUS_OBJ = $(BONUS_SRC:.c=.o)
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJ) $(BONUS_OBJ)
	$(AR) $(NAME) $(OBJ) $(BONUS_OBJ)
	
clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)	

re: fclean all

recl: all clean
