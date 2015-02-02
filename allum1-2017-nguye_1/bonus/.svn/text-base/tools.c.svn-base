/*
** tools.c for allum1 in /home/nguye_1//afs_loc/projects/tmp/allum1
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Fri Feb 15 20:39:21 2013 alexandre1 nguyen
** Last update Sat Feb 16 16:18:00 2013 alexandre1 nguyen
*/

#include <termios.h>
#include <curses.h>
#include <term.h>
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int	allums_per_line(t_param *param, int k)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (param->allums[k][j] == 0)
    j += 1;
  while (param->allums[k][j] == 1)
    {
      i += 1;
      j += 1;
    }
  return (i);
}

int	lines_left(t_param *param)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (j != param->k)
    {
      if (allums_per_line(param, j) > 0)
	i += 1;
      j += 1;
    }
  return (i);
}

int	not_empty_lines(t_param *param)
{
  int	i;

  i = 2;
  param->po_ia = (param->allums_remaining + i) % param->k;	
  if (allums_per_line(param, param->po_ia) == 0)
    {
      while (allums_per_line(param, param->po_ia) == 0)
	{
	  i += 1;
	  param->po_ia = (param->allums_remaining + i) % param->k;
	}
    }
  return (EXIT_SUCCESS);
}

int	not_empty_lines_next(t_param *param)
{
  param->po_ia = (param->po_ia + 1) % (param->k + 1);
  if (allums_per_line(param, param->po_ia) == 0)
    {
      while (allums_per_line(param, param->po_ia) == 0)
	param->po_ia = (param->po_ia + 1) % (param->k + 1);
    }
  return (param->po_ia);
}

int	not_empty_lines_next_k(t_param *param)
{
  int	k;

  k = param->po_ia;
  while (allums_per_line(param, k) == 0)
    k = (k + 1) % (param->k + 1);
  if (allums_per_line(param, k) > 0)
    {
      k = (k + 1) % (param->k + 1);
      while (allums_per_line(param, k) == 0)
  	k = (k + 1) % (param->k + 1);
    }
  return (k);
}
