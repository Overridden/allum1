/*
** more_than_three_matches.c for allum1 in /home/nguye_1//afs_loc/projects/tmp/allum1
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Fri Feb 15 20:43:34 2013 alexandre1 nguyen
** Last update Fri Feb 15 23:22:46 2013 alexandre1 nguyen
*/

#include <termios.h>
#include <curses.h>
#include <term.h>
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int	more_than_three_matches(t_param *param, int i)
{
  not_empty_lines(param);
  i = allums_per_line(param, param->po_ia);
  return (i);
}
