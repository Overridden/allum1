/*
** tools_next.c for allum1 in /home/nguye_1//afs_loc/projects/tmp/allum1
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Fri Feb 15 20:41:07 2013 alexandre1 nguyen
** Last update Fri Feb 15 20:42:03 2013 alexandre1 nguyen
*/

#include <termios.h>
#include <curses.h>
#include <term.h>
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int	check_one_match(t_param *param)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (i < param->k)
    {
      if (allums_per_line(param, i) == 1)
	j += 1;
      i += 1;
    }
  return (j);
}

int	check_two_match(t_param *param)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (i < param->k)
    {
      if (allums_per_line(param, i) == 2)
	j += 1;
      i += 1;
    }
  return (j);
}
