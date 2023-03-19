SRCS		= 	ft_printf.c \
				ft_printalpha.c \
				ft_printnum.c
OBJS		= $(SRCS:.c=.o)

NAME		= libftprintf.a

CC			= gcc
RM			= rm -f
CFLAGS		= -Wall -Werror -Wextra

all:		$(NAME)

$(NAME):	$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re