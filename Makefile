NAME	=	libftprintf.a
HEADER	=	ft_printf.h
OBJ		=	$(SRCS:%.c=%.o)

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