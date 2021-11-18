NAME	=	libftprintf.a

SRCS	=	ft_printf.c			ft_integer.c		ft_str_char.c\
			ft_unsigned_hex.c	ft_unsigned_int.c	ft_void_pointer.c

HEADER	=	ft_printf.h
OBJ		=	$(SRCS:%.c=%.o)

CFLAGS	=	-Wall -Wextra -Werror

.PHONY	:	all clean fclean re

all		:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
	ar rcs $(NAME) $?

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	@rm -f $(OBJ) $(OBJ_B)

fclean	:	clean
	@$(RM) $(NAME)

re		:	fclean all