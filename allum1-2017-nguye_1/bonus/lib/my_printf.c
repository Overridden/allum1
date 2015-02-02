/*
** my_printf.c for printf in /home/nguye_1//afs_loc/printfduo
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Thu Nov  8 14:17:59 2012 alexandre1 nguyen
** Last update Fri Nov 23 08:24:18 2012 alexandre1 nguyen
*/

#include <stdlib.h>
#include <stdarg.h>
#include "list.h"

int	flags(const char *format, int i, va_list ap)
{
  char	str[14] = "sudicxXob%Splh";
  int	(*fptr[14])(va_list);
  int	j;

  j = 0;
  fptr[0] = &s;
  fptr[1] = &u;
  fptr[2] = &di;
  fptr[3] = &di;
  fptr[4] = &c;
  fptr[5] = &x;
  fptr[6] = &X;
  fptr[7] = &o;
  fptr[8] = &b;
  fptr[9] = &per;
  fptr[10] = &S;
  fptr[11] = &p;
  fptr[12] = &ld;
  fptr[13] = &hd;
  while (format[i] != str[j])
    j += 1;
  (*fptr[j])(ap);
}

int	my_printf(const char *format, ...)
{
  int	i;
  int	s;
  va_list	ap;

  i = 0;
  s = 0;
  va_start(ap, format);
  while (format[i] != '\0')
    {
      if (format[i] == '%')
	{
	  i += 1;
	  s += 1;
	  flags(format, i, ap);
	  if (format[i + 1] == 'd')
	    i += 1;
	}
      else
	my_putchar(format[i]);
      i = i + 1;
    }
  va_end(ap);
  return (0);
}
