/*
** display.c for allum1 in /home/nguye_1//afs_loc/projects/tmp/allum1
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Fri Feb 15 20:37:15 2013 alexandre1 nguyen
** Last update Sun Feb 17 16:54:01 2013 alexandre1 nguyen
*/

#include <termios.h>
#include <curses.h>
#include <term.h>
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int	allum_bis(t_param *param, int nb, int j, int k)
{
  int	i;

  i = 0;
  while (j <= nb)
    {
      my_printf("%d\t", k + 1);
      while (i < (nb-j)/2)
	{
	  my_putchar(' ');
	  i += 1;
	}
      i = 0;
      param->marker[0] = 1;
      if (param->marker[k] == 1)
	my_putstr(param->term.us);
      allum_bisbis(param, i, j, k);
      my_putstr(param->term.me);
      k += 1;
      j += 2;
      i = 0;
      my_putchar('\n');
    }
  return (k);
}

int	allum(t_param *param, int nb, int j)
{
  int	k;

  k = 0;
  my_printf("%s%d match(es) on the last line -- PRESS Q KEY to quit\n\n",
	    param->term.vi, nb);
  k = allum_bis(param, nb, j, k);
  your_turn();
  param->k = k;
  return (EXIT_SUCCESS);
}

void	display_bisbis(t_param *param, int i, int j, int k)
{
  while (i < j)
    {
      if (param->allums[k][i] == 1)
	{
	  my_putchar('|');
	      param->allums_remaining += 1;
	}
      else
	my_putchar(' ');
      i += 1;
    }
}

void	display_bis(t_param *param, int	i, int j, int k)
{
  while (j <= param->nb)
    {
      i = 0;
      my_putstr(tgoto(param->term.cm, i, k + 2));
      my_printf("%d\t", k + 1);
      while (i < (param->nb-j)/2)
	{
	  my_putchar(' ');
	  i += 1;
	}
      i = 0;
      if (param->marker[k] == 1)
	my_putstr(param->term.us);
      else if (param->marker[k] == 2)
	my_putstr(param->term.mr);
      display_bisbis(param, i, j, k);
      param->marker[k] = 0;
      my_putstr(param->term.me);
      k += 1;
      j += 2;
      my_putchar('\n');
    }
}

int	display(t_param *param)
{
  int	i;
  int	j;
  int	k;

  i = 0;
  param->allums_remaining = 0;
  if ((param->nb % 2) == 0)
    j = 2;
  else
    j = 1;
  k = 0;
  display_bis(param, i, j, k);
  image(param);
  return (EXIT_SUCCESS);
}
