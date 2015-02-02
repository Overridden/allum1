/*
** selection_&_del_&_ia.c for allum1 in /home/nguye_1//afs_loc/projects/tmp/allum1
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Fri Feb 15 20:46:48 2013 alexandre1 nguyen
** Last update Sun Feb 17 16:48:39 2013 alexandre1 nguyen
*/

#include <termios.h>
#include <curses.h>
#include <term.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "list.h"

int	del_ia(t_param *param)
{
  int	i;

  i = 0;
  while (i <= param->nb)
    {
      if (param->allums[param->po_ia][i] == 1)
	{
	  param->allums[param->po_ia][i] = 0;
	  i = param->nb + 1;
	}
      i += 1;
    }
  return (EXIT_SUCCESS);
}

int	del_nbr(t_param *param)
{
  int	i;

  i = 0;
  if (lines_left(param) > 3)
    i = more_than_three_matches(param, i);
  else if (lines_left(param) == 3)
    i = three_matches(param, i);
  else if (lines_left(param) == 2)
    i = two_matches(param, i);
  else
    i = one_match(param, i);
  return (i);
}

int	ia(t_param *param)
{
  int	i;
  int	j;

  i = 0;
  j = del_nbr(param);
  param->turn = 0;
  while (i != j)
    {
      del_ia(param);
      display(param);
      usleep(60000 - param->k * 30);
      i += 1;
    }
  return (EXIT_SUCCESS);
}

void	selection_loop_bis(t_param *param)
{
  int	i;
  int	j;

  i = 42;
  j = 0;
  while (i != 197)
    {
      param->marker[param->po] = 2;
      display(param);
      read(0, param->buf, 3);
      if (param->buf[0] == 127)
	{
	  del(param);
	  j = 1;
	}
      if (param->buf[0] == 10 && j == 1)
	i = 197;
      display(param);
    }
}

int	selection_loop(t_param *param)
{
  selection_loop_bis(param);
  if (param->allums_remaining == 1)
    won(param);
  else if (param->allums_remaining == 0)
    lost(param);
  ia(param);
  if (param->allums_remaining == 1)
    lost(param);
  else if (param->allums_remaining == 0)
    won(param);
  param->turn = 1;
  return (EXIT_SUCCESS);
}
