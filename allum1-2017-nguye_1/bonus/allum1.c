/*
** main.c for allum1 in /home/nguye_1/afs_loc/projects/tmp/allum1
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Mon Feb  4 16:01:35 2013 alexandre1 nguyen
** Last update Sun Feb 17 17:17:58 2013 alexandre1 nguyen
*/

#include <termios.h>
#include <curses.h>
#include <term.h>
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void	main_loop(t_param *param)
{
  while (42)
    {
      my_putstr(param->term.cl);
      if ((param->nb % 2) == 0)
	allum(param, param->nb, 2);
      else
	allum(param, param->nb, 1);
      param->marker[0] = 0;
      main_loop_bis(param);
      my_printf("%s%s\n", param->term.me, param->term.ve);
      safety_exit(param);
    }
}

int	main(int ac, char **av)
{
  t_param	*param;

  if (ac != 2)
    {
      my_putstr("\033[0;31mUsage: ./allum1 [nbr_of_matches_on_the_last_line]\n\n");
      my_putstr("Closing program.\n\033[0m");
      return (EXIT_SUCCESS);
    }
  if (my_getnbr(av[1]) > 102 || my_getnbr(av[1]) < 1)
    {
      my_putstr("\033[0;31mError: number of matches.\n\n");
      my_putstr("Usage: ./allum1 [nbr_of_matches (> 0 & <= 102)]\n\n");
      my_putstr("Closing program.\n\033[0m");
      return (EXIT_SUCCESS);
    }
  if ((param = malloc(sizeof(*param))) == NULL)
    return (EXIT_FAILURE);
  mallocing(param, av);
  setting(param);
  param->allums = init_int_tab(param->allums, param->nb, param);
  main_loop(param);
  safety_exit(param);
  return (EXIT_SUCCESS);
}
