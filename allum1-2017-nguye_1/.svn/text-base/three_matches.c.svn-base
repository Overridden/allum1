/*
** three_matches.c for allum1 in /home/nguye_1//afs_loc/projects/tmp/allum1
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Fri Feb 15 20:45:29 2013 alexandre1 nguyen
** Last update Fri Feb 15 20:45:48 2013 alexandre1 nguyen
*/

#include <termios.h>
#include <curses.h>
#include <term.h>
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/*
** ||| ||| |
** ||| |   |
** ||| ||| |||
** |   |   |
*/
int	three_matches(t_param *param, int i)
{
  not_empty_lines_next(param);
  if (check_one_match(param) == 1)
    i = 1;
  else if (check_one_match(param) == 2)
    {
      while (allums_per_line(param, param->po_ia) == 1)
	not_empty_lines_next(param);
      i = allums_per_line(param, param->po_ia) - 1;
    }
  else if (check_one_match(param) == 0)
    i = allums_per_line(param, param->po_ia) - 1;
  else
    {
      while (allums_per_line(param, param->po_ia) != 1)
	not_empty_lines_next(param);
      i = allums_per_line(param, param->po_ia);
    }
  return (i);
}
