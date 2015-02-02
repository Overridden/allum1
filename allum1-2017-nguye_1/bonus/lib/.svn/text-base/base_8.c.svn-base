/*
** base_8.c for printf in /home/nguye_1//afs_loc/printfduo
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Wed Nov 14 14:17:14 2012 alexandre1 nguyen
** Last update Sun Nov 18 01:16:28 2012 alexandre1 nguyen
*/

#include <stdlib.h>
#include <stdarg.h>
#include "list.h"

int	nbr_len8(int n)
{
  int	len;
  int	res;

  len = 0;
  while (n)
    {
      res = n / 8;
      n = res;
      len += 1;
    }
  return (len);
}

int	base_8(int nbr_in)
{
  int	n;
  int	len;
  int	res;
  char	*nbr;
  int	r;

  n =  nbr_in;
  len = nbr_len8(n);
  nbr = malloc(len + 1);
  while (n)
    {
      res = n / 8;
      r = n - (res * 8);
      n = res;
      nbr[len - 1] = r + 48;
      len -= 1;
    }
  my_putstr(nbr);
}
