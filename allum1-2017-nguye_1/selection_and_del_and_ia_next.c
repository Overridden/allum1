/*
** selection_&_del_&_ia_next.c for allum1 in /home/nguye_1//afs_loc/projects/tmp/allum1
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Fri Feb 15 20:48:48 2013 alexandre1 nguyen
** Last update Fri Feb 15 20:49:14 2013 alexandre1 nguyen
*/

#include <termios.h>
#include <curses.h>
#include <term.h>
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int	del(t_param *param)
{
  int	i;

  i = 0;
  while (i <= param->nb)
    {
      if (param->allums[param->po][i] == 1)
	{
	  param->allums[param->po][i] = 0;
	  i = param->nb + 1;
	}
      i += 1;
    }
  return (EXIT_SUCCESS);
}
