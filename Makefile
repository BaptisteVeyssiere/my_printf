##
## Makefile for my_printf in /home/VEYSSI_B/rendu/PSU_2015_my_printf
## 
## Made by Baptiste veyssiere
## Login   <VEYSSI_B@epitech.net>
## 
## Started on  Sat Nov  7 20:15:15 2015 Baptiste veyssiere
## Last update Tue Nov 10 16:48:54 2015 Baptiste veyssiere
##

NAME	= libmy.a

SRCS	= my_revstr.c \
	converter.c \
	my_put_nbr.c \
	my_strcpy.c \
	my_strlen.c \
	my_putchar.c \
	my_putstr.c \
	case1.c \
	case2.c \
	case3.c \
	space_and_add.c \
	signed_unsigned.c \
	my_put_nbr2.c \
	my_printf.c

OBJS	= $(SRCS:.c=.o)

$(NAME):
	cc -c $(SRCS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
