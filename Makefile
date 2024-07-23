SRCS	=	srcs/racional.c\
			srcs/mcm_mcd.c

OBJS	= $(patsubst srcs/%.c,objs/%.o,$(SRCS))

NAME	= libmatheso.a

objs/%.o: srcs/%.c
	$(CC) -Iheaders $(CFLAGS) -c $< -o $@

all:	$(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
$(NAME):	$(OBJS)
	ar rc $(NAME) $(OBJS)