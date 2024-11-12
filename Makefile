NAME=libftprintf.a

SRCS= ft_printf.c ft_printf.ext.c
OBJS= $(SRCS:.c=.o)
RM = rm -f
CFLAGS= -Wall -Werror -Wextra
CC = cc

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re