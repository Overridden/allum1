/*
** images.c for allum1 in /home/nguye_1//afs_loc/projects/tmp/allum1
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Fri Feb 15 20:31:20 2013 alexandre1 nguyen
** Last update Fri Feb 15 22:59:23 2013 alexandre1 nguyen
*/

#include <termios.h>
#include <curses.h>
#include <term.h>
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void	your_turn()
{
  my_printf("\n\n##################################\n");
  my_printf("#    \\   \\\\    YOUR    //   /    #\n");
  my_printf("#      \\   \\\\  TURN  //   /      #\n");
  my_printf("##################################\n\n\n");
  my_printf("##################################\n");
  my_printf("#                                #\n");
  my_printf("# ->ENTER to select/finish turn  #\n");
  my_printf("# ->DEL   to remove matches      #\n");
  my_printf("#                                #\n");
  my_printf("##################################\n");
}

void	ias_turn()
{
  my_printf("\n\n##################################\n");
  my_printf("#     -`\\    . IA'S .    /^-     #\n");
  my_printf("#    *_* `__-  TURN  -__^ *_*    #\n");
  my_printf("##################################\n\n\n");
  my_printf("##################################\n");
  my_printf("#                                #\n");
  my_printf("# ->ENTER to select/finish turn  #\n");
  my_printf("# ->DEL   to remove matches      #\n");
  my_printf("#                                #\n");
  my_printf("##################################\n");
}

void	win()
{
  my_printf("\n\n##################################\n");
  my_printf("#      /        YOU         /    #\n");
  my_printf("#    \\/         WIN!      \\/     #\n");
  my_printf("##################################\n\n\n");
  my_printf("##################################\n");
  my_printf("#                                #\n");
  my_printf("# ->ENTER to select/finish turn  #\n");
  my_printf("# ->DEL   to remove matches      #\n");
  my_printf("#                                #\n");
  my_printf("##################################\n");
}

void	loose()
{
  my_printf("\n\n##################################\n");
  my_printf("#    \\/         YOU        \\/    #\n");
  my_printf("#    /\\        LOSE!       /\\    #\n");
  my_printf("##################################\n\n\n");
  my_printf("##################################\n");
  my_printf("#                                #\n");
  my_printf("# ->ENTER to select/finish turn  #\n");
  my_printf("# ->DEL   to remove matches      #\n");
  my_printf("#                                #\n");
  my_printf("##################################\n");
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
