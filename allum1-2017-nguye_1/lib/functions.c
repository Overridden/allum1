/*
** functions.c for printf in /home/nguye_1//afs_loc/printfduo
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Fri Nov 16 13:35:57 2012 alexandre1 nguyen
** Last update Sun Nov 18 01:23:57 2012 alexandre1 nguyen
*/

#include <stdlib.h>
#include <stdarg.h>
#include "list.h"

int	s(va_list ap)
{
  f_s(va_arg(ap, char*));
}

int	u(va_list ap)
{
  f_u(va_arg(ap, unsigned int));
}

int	di(va_list ap)
{
  f_di(va_arg(ap, int));
}

int	c(va_list ap)
{
  f_c(va_arg(ap, int));
}
