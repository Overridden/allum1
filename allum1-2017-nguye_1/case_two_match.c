/*
** case_two_match.c for allum1 in /home/nguye_1//afs_loc/projects/tmp/allum1
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Fri Feb 15 20:34:08 2013 alexandre1 nguyen
** Last update Fri Feb 15 21:45:33 2013 alexandre1 nguyen
*/

#include <termios.h>
#include <curses.h>
#include <term.h>
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/* || | */
int	two_matches_case_one(t_param *param, int i)
{
  while (allums_per_line(param, param->po_ia) != 2)
    not_empty_lines_next(param);
  i = allums_per_line(param, param->po_ia);
  return (i);
}

/* |||| | */
int	two_matches_case_two(t_param *param, int i)
{
  while (allums_per_line(param, param->po_ia) <= 2)
    not_empty_lines_next(param);
  i = allums_per_line(param, param->po_ia);
  return (i);
}

/* | | */
int	two_matches_case_three(t_param *param, int i)
{
  while (allums_per_line(param, param->po_ia) != 1)
    not_empty_lines_next(param);
  i = allums_per_line(param, param->po_ia);
  return (i);
}

/* |||| || */
int	two_matches_case_four(t_param *param, int i)
{
  not_empty_lines_next(param);
  if (allums_per_line(param, param->po_ia) == 2)
    not_empty_lines_next(param);
  i = allums_per_line(param, param->po_ia) - 2;
  return (i);
}

int	two_matches(t_param *param, int i)
{
  if ((check_two_match(param) == 1) && (check_one_match(param) == 1))
    i = two_matches_case_one(param, i);
  else if (check_one_match(param) == 1)
    i = two_matches_case_two(param, i);
  else if (check_one_match(param) == 2)
    i = two_matches_case_three(param, i);
  else if (check_two_match(param) == 1)
    i = two_matches_case_four(param, i);
  else if (check_two_match(param) == 0)
    i = two_matches_case_five(param, i);
  else if (check_two_match(param) == 2)
    i = two_matches_case_six(param, i);
  return (i);
}
