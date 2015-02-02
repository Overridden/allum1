/*
** init_and_exit.c for allum1 in /home/nguye_1//afs_loc/projects/tmp/allum1
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Fri Feb 15 21:31:39 2013 alexandre1 nguyen
** Last update Sun Feb 17 17:15:44 2013 alexandre1 nguyen
*/

#include <termios.h>
#include <curses.h>
#include <term.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "list.h"

int	safety_exit(t_param *param)
{
  int	i;

  i = 0;
  while (i != param->nb)
    {
      free(param->allums[i]);
      i += 1;
    }
  free(param->term.cm);
  free(param->term.cl);
  free(param->term.gt);
  free(param->term.us);
  free(param->term.me);
  free(param->term.mr);
  free(param->term.vi);
  free(param->term.ve);
  free(param->buf);
  free(param->marker);
  free(param->allums);
  free(param);
  my_printf("%s%s", param->term.ve, param->term.me);
  exit(EXIT_SUCCESS);
}

int	setting(t_param *param)
{
  struct termios	termios_p;

  tgetent(NULL, "xterm");
  param->term.cm = tgetstr("cm", NULL);
  param->term.cl = tgetstr("cl", NULL);
  param->term.gt = tgoto(param->term.cm, 0, 0);
  param->term.us = tgetstr("us", NULL);
  param->term.me = tgetstr("me", NULL);
  param->term.mr = tgetstr("mr", NULL);
  param->term.vi = tgetstr("vi", NULL);
  param->term.ve = tgetstr("ve", NULL);
  if (tcgetattr(0, &termios_p) < 0)
    return (EXIT_FAILURE);
  termios_p.c_lflag &= ~(ICANON);
  termios_p.c_lflag &= ~(ECHO);
  termios_p.c_cc[VTIME] = 0;
  termios_p.c_cc[VMIN] = 1;
  if (tcsetattr(0, TCSANOW, &termios_p) < 0)
    return (EXIT_FAILURE);
  param->po = 0;
  return (EXIT_SUCCESS);
}

int	**init_int_tab(int **allums, int nb, t_param *param)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (i != nb)
    {
      while (j != nb)
	{
	  allums[i][j] = 3;
	  param->marker[i] = 0;
	  j += 1;
	}
      i += 1;
      j = 0;
    }
  return (allums);
}

void	main_loop_bis(t_param *param)
{
  while (param->buf[0] != 113)
    {
      read(0, param->buf, 3);
      param->turn = 1;
      if (param->buf[0] == 27 && param->buf[1] == 91 && param->buf[2] == 66)
	param->po = (param->po + 1) % param->k;
      else if (param->buf[0] == 27 && param->buf[1] == 91 &&
	       param->buf[2] == 65)
	param->po = (param->po + param->k - 1) % param->k;
      else if (param->buf[0] == 10)
	selection_loop(param);
      param->marker[param->po] = 1;
      display(param);
    }
}

int	mallocing(t_param *param, char **av)
{
  int	i;

  i = 0;
  param->nb = my_getnbr(av[1]);
  my_put_nbr(param->nb);
  if ((param->allums = malloc(param->nb*param->nb*sizeof(int))) == NULL)
    return (EXIT_FAILURE);
  if ((param->marker = malloc(param->nb*sizeof(int))) == NULL)
    return (EXIT_FAILURE);
  if ((param->buf = malloc(4*sizeof(*param->buf))) == NULL)
    return (EXIT_FAILURE);
  while (i != param->nb)
    {
      if ((param->allums[i] = malloc(param->nb*sizeof(int))) == NULL)
	return (EXIT_FAILURE);
      i += 1;
    }
  return (EXIT_SUCCESS);
}
