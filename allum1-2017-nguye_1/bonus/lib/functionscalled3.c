/*
** functionscalled3.c for printf in /home/nguye_1//afs_loc/printfduo
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Sun Nov 18 01:28:22 2012 alexandre1 nguyen
** Last update Mon Feb  4 15:25:04 2013 alexandre1 nguyen
*/

#include <stdlib.h>
#include <stdarg.h>
#include "list.h"

int	f_per()
{
    my_putchar('%');
}

int	f_S(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] < 32 || str[i] >= 127)
	{
	  my_putchar('\\');
	  if (str[i] < 8)
	    my_putstr("00");
	  if (str[i] > 7 && str[i] <= 32)
	    my_putstr("0");
	  base_8(str[i]);
	}
      else if (str[i] > 32 && str[i] < 127)
	{
	  my_putchar(str[i]);
	}
      i += 1;
    }
}

int	f_p(unsigned int str)
{
  my_putstr("0x");
  base_16p(str);
}

int	f_ld(long int nbr)
{
  my_put_nbr_long(nbr);
}
