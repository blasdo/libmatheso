SRCS	= srcs/racional.c
OBJS	= $(patsubst srcs/%.c,objs/%.o,$(SRCS))
NAME	= libmatheso

all:	$(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
$(NAME):	$(OBJS)
	ar rc $(NAME) $(OBJS)