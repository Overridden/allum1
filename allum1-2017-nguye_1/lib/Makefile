##
## Makefile for Makefile Jour_10 in /home/nguye_1//afs_loc/Jour_10
## 
## Made by alexandre1 nguyen
## Login   <nguye_1@epitech.net>
## 
## Started on  Mon Oct 22 15:48:06 2012 alexandre1 nguyen
## Last update Mon Feb  4 17:10:19 2013 alexandre1 nguyen
##

NAME	=	libmy.a

SRCS	=	my_putstr.c \
		my_strcpy.c \
		my_strncat.c \
		my_recstr.c \
		my_str_isalpha.c \
		my_strncmp.c \
		my_find_prime_sup.c \
		my_showmen.c \
		my_str_islower.c \
		my_strncpy.c \
		my_getnbr.c \
		my_getnbr_unsigned.c \
		my_showstr.c \
		my_str_isnum.c \
		my_strstr.c \
		my_isneg.c \
		my_sort_int_tab.c \
		my_str_isprintable.c \
		my_strupcase.c \
		my_is_prime.c \
		my_square_root.c \
		my_str_isupper.c \
		my_swap.c \
		my_power_rec.c \
		my_power_it.c \
		my_strcapitalize.c \
		my_strlcal.c \
		my_strcat.c \
		my_putchar.c \
		my_strlen.c \
		my_put_nbr.c \
		my_put_nbrunsigned.c \
		my_strcmp.c \
		my_charcmp.c \
		my_strlowcase.c \
		base_16.c \
		base_2.c \
		base_8.c \
		functions2.c \
		functions3.c \
		functions4.c \
		functions.c \
		functionscalled2.c \
		functionscalled3.c \
		functionscalled4.c \
		functionscalled.c \
		my_printf.c \
		my_put_in_base.c \
		my_conv_base.c \
		get_next_line.c

OBJS		= $(SRCS:.c=.o)

RM		= rm -f

CP		= cp $(NAME) ../.

$(NAME):	$(OBJS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)
		$(CP)

all:		$(NAME)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME) ../$(NAME)

re:		fclean all