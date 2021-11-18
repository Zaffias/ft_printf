
SRCS	=		ft_putchar.c \
				ft_putmem.c \
				ft_putnbr_u.c \
				ft_putnbr.c \
				ft_puthex_cap.c \
				ft_puthex_low.c \
				ft_putstr.c \


SRCH	=		ft_printf.h

OBJS	=		$(SRCS:.c=.o)

CC		=		gcc

RM		=		rm -f

AR		=		ar rcs

CFLAGS	=		-Wall -Werror -Wextra

NAME	=		libftprintf.a


all: $(NAME)

$(NAME): $(OBJS) $(SRCH)
	$(AR) $(NAME) $(OBJS)

clean:
	${RM} ${OBJS} ${OBJB}

fclean: clean
	${RM} ${NAME}

re: fclean all

rebonus: fclean bonus

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS) $(SRCBONUS)
	gcc -nostartfiles -shared -o libft.so $(OBJS) $(OBJB)

.PHONY: all clean fclean bonus re rebonus

