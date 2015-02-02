/*
** case_two_match_next.c for allum1 in /home/nguye_1//afs_loc/projects/tmp/allum1
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Fri Feb 15 20:35:43 2013 alexandre1 nguyen
** Last update Fri Feb 15 22:59:47 2013 alexandre1 nguyen
*/

#include <termios.h>
#include <curses.h>
#include <term.h>
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/* |||| |||| */
int	two_matches_case_five(t_param *param, int i)
{
  not_empty_lines_next(param);
  if (allums_per_line(param, not_empty_lines_next_k(param)) >
      allums_per_line(param, param->po_ia))
    not_empty_lines_next(param);
  i = (allums_per_line(param, param->po_ia) -
	allums_per_line(param, not_empty_lines_next_k(param)));
  return (i);
}

/* || || */
int	two_matches_case_six(t_param *param, int i)
{
  not_empty_lines_next(param);
  i = 1;
  return (i);
}
