##
## Makefile for allum1 in /home/nguye_1//afs_loc/projects/tmp/allum1
## 
## Made by alexandre1 nguyen
## Login   <nguye_1@epitech.net>
## 
## Started on  Mon Feb  4 15:36:25 2013 alexandre1 nguyen
## Last update Sat Feb 16 16:18:46 2013 alexandre1 nguyen
##

NAME		= allum1

SRCS		= allum1.c \
		init_and_exit.c \
		case_one_match.c \
		case_two_match.c \
		case_two_match_next.c \
		display.c \
		display_next.c \
		images.c \
		lost_and_won.c \
		more_than_three_matches.c \
		selection_and_del_and_ia.c \
		selection_and_del_and_ia_next.c \
		three_matches.c \
		tools.c \
		tools_next.c


OBJS		= $(SRCS:.c=.o)

RM		= rm -f

CD		= cd

LIB		= lib

MAKE		= make

CLEAN		= make clean

FCLEAN		= make fclean

RE		= make re

CFLAGS		= -Wall -W -pedantic -Werror -Wextra

all :		lib_all $(NAME)

$(NAME):	$(OBJS)
		cc $(OBJS) $(CFLAGS) -o $(NAME) -ltermcap -lmy -L.

clean:		lib_clean
		$(RM) $(OBJS)

fclean:		lib_fclean clean
		$(RM) $(NAME)

re:		fclean all

lib_all:	
		$(CD) $(LIB) ; $(MAKE)

lib_re:
		$(CD) $(LIB) ; $(RE)

lib_fclean:
		$(CD) $(LIB) ; $(FCLEAN)

lib_clean:
		$(CD) $(LIB) ; $(CLEAN)
