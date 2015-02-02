/*
** base_16.c for printf in /home/nguye_1//afs_loc/printfduo
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Wed Nov 14 17:39:46 2012 alexandre1 nguyen
** Last update Mon Feb  4 15:23:58 2013 alexandre1 nguyen
*/

#include <stdlib.h>
#include <stdarg.h>
#include "list.h"

unsigned int	nbr_len16_c(unsigned int n)
{
  unsigned int	len;
  unsigned int	res;

  len = 0;
  while (n)
    {
      res = n / 16;
      n = res;
      len += 1;
    }
  return (len);
}

unsigned int	base_16_c(unsigned int nbr_in)
{
  unsigned int	n;
  unsigned int	len;
  unsigned int	res;
  char	*nbr;
  unsigned int	r;

  n = nbr_in;
  len = nbr_len16_c(n);
  nbr = malloc(len + 1);
  while (n)
    {
      res = n / 16;
      r = n - (res * 16);
      n = res;
      nbr[len - 1] = r + 48;
      if (r > 9)
	{
	  r = r - 9 + 64;
	  nbr[len - 1] = r;
	}
      len -= 1;
    }
  my_putstr(nbr);
}

unsigned int	base_16(unsigned int nbr_in)
{
  unsigned int	n;
  unsigned int	len;
  unsigned int	res;
  char	*nbr;
  unsigned int	r;

  n = nbr_in;
  len = nbr_len16_c(n);
  nbr = malloc(len + 1);
  while (n)
    {
      res = n / 16;
      r = n - (res * 16);
      n = res;
      if (r < 10)
	nbr[len - 1] = r + 48;
      if (r > 9 && r < 20)
	{
	  r = r - 9 + 96;
	  nbr[len - 1] = r;
	}
      len -= 1;
    }
  my_putstr(nbr);
}

unsigned int	base_16p(unsigned int nbr_in)
{
  unsigned int	n;
  unsigned int	len;
  unsigned int	res;
  char	*nbr;
  unsigned int	r;

  n = nbr_in;
  len = nbr_len16_c(n);
  nbr = malloc(len + 1);
  while (n)
    {
      res = n / 16;
      r = n - (res * 16);
      n = res;
      if (r < 10)
	nbr[len - 1] = r + 48;
      if (r > 9 && r < 20)
	{
	  r = r - 9 + 96;
	  nbr[len - 1] = r;
	}
      len -= 1;
    }
  my_putstr(nbr);
}
