/*
** images.c for allum1 in /home/nguye_1//afs_loc/projects/tmp/allum1
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Fri Feb 15 20:31:20 2013 alexandre1 nguyen
** Last update Sat Feb 16 18:20:14 2013 alexandre1 nguyen
*/

#include <termios.h>
#include <curses.h>
#include <term.h>
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void	your_turn()
{
  my_printf("\n\n\033[33m##################################\n");
  my_printf("#   \033[36m \\   \\\\\033[0m    YOUR");
  my_printf("    \033[36m//   /\033[33m    #\n");
  my_printf("#      \033[36m\\   \\\\\033[0m  TURN");
  my_printf("  \033[36m//   /\033[33m      #\n");
  my_printf("##################################\n\n\n");
  my_printf("##################################\n");
  my_printf("#                                #\n");
  my_printf("# \033[0m->ENTER to select/finish turn\033[33m  #\n");
  my_printf("# \033[0m->DEL   to remove matches\033[33m      #\n");
  my_printf("#                                #\n");
  my_printf("##################################\033[0m\n");
}

void	ias_turn()
{
  my_printf("\n\n\033[33m##################################\n");
  my_printf("#    \033[35m -`\\    .\033[0m IA'S");
  my_printf(" \033[35m.    /^-\033[33m     #\n");
  my_printf("#    \033[35m*_* `__-\033[0m  TURN");
  my_printf("  \033[35m-__^ *_*\033[33m    #\n");
  my_printf("##################################\n\n\n");
  my_printf("##################################\n");
  my_printf("#                                #\n");
  my_printf("# \033[0m->ENTER to select/finish turn\033[33m  #\n");
  my_printf("# \033[0m->DEL   to remove matches\033[33m      #\n");
  my_printf("#                                #\n");
  my_printf("##################################\033[0m\n");
}

void	win()
{
  my_printf("\n\n\033[32m##################################\n");
  my_printf("#      /        \033[0mYOU\033[32m         /    #\n");
  my_printf("#    \\/         \033[0mWIN!\033[32m      \\/     #\n");
  my_printf("##################################\033[0m\n\n\n");
  my_printf("\033[33m##################################\n");
  my_printf("#                                #\n");
  my_printf("# \033[0m->ENTER to select/finish turn\033[33m  #\n");
  my_printf("# \033[0m->DEL   to remove matches\033[33m      #\n");
  my_printf("#                                #\n");
  my_printf("##################################\033[0m\n");
}

void	loose()
{
  my_printf("\n\n\033[31m##################################\n");
  my_printf("#   \033[5;31m \\/         \033[0mYOU\033[5;31m        \\/   \033[0;31m #\n");
  my_printf("#   \033[5;31m /\\        \033[0mLOSE !\033[5;31m      /\\   \033[0;31m #\n");
  my_printf("##################################\033[0m\n\n\n");
  my_printf("\033[33m##################################\n");
  my_printf("#                                #\n");
  my_printf("# \033[0m->ENTER to select/finish turn\033[33m  #\n");
  my_printf("# \033[0m->DEL   to remove matches\033[33m      #\n");
  my_printf("#                                #\n");
  my_printf("##################################\033[0m\n");
}

void	image(t_param *param)
{
  if (param->turn == 1)
    your_turn();
  else if (param->turn == 0)
    ias_turn();
  else if (param->turn == 2)
    loose();
  else
    win();
}
