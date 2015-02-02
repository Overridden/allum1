/*
** base_2.c for printf in /home/nguye_1//afs_loc/printfduo
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Wed Nov 14 14:13:46 2012 alexandre1 nguyen
** Last update Fri Nov 16 18:09:41 2012 alexandre1 nguyen
*/

#include <stdlib.h>
#include <stdarg.h>
#include "list.h"

unsigned int	nbr_len2(unsigned int n)
{
  unsigned int	len;
  unsigned int	res;

  len = 0;
  while (n)
    {
      res = n / 2;
      n = res;
      len += 1;
    }
  return (len);
}

unsigned int	base_2(unsigned int nbr_in)
{
  unsigned int	n;
  unsigned int	len;
  unsigned int	res;
  char	*nbr;
  unsigned int	r;

  n =  nbr_in;
  len = nbr_len2(n);
  nbr = malloc(len + 1);
  while (n)
    {
      res = n / 2;
      r = n - (res * 2);
      n = res;
      nbr[len - 1] = r + 48;
      len -= 1;
    }
  my_putstr(nbr);
}
