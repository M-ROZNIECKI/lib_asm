NAME = libasm.a

BONUS = for_the_norm

SRC =	src/ft_strlen.s\
		src/ft_strcmp.s\
		src/ft_strcpy.s\
		src/ft_read.s\
		src/ft_write.s\
		src/ft_strdup.s

SRC_BONUS =	src_bonus/ft_atoi_base.s\
			src_bonus/ft_list_size.s\
			src_bonus/ft_list_push_front.s

HEADER =	libasm.h

OBJ =	$(SRC:.s=.o)

OBJ_BONUS =	$(SRC_BONUS:.s=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@ar rc $(NAME) $(OBJ)

bonus: $(NAME) $(OBJ_BONUS)

$(BONUS): $(OBJ) $(OBJ_BONUS) $(HEADER)
	@ar rc $(NAME) $(OBJ) $(OBJ_BONUS)

%.o: %.s
	@nasm -o $@ -f elf64 $<

.PHONY: clean fclean re all bonus

clean:
	@/bin/rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	@/bin/rm -rf $(NAME)

re: fclean all
