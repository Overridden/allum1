/*
** my_conv_base.c for lib in /home/nguye_1//afs_loc/projects/102chiffrement-2017-lastru_g/lib
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Thu Nov 29 12:58:37 2012 alexandre1 nguyen
** Last update Thu Nov 29 16:32:48 2012 alexandre1 nguyen
*/

#include <stdio.h>
#include <stdlib.h>

int	*my_conv_base2(char *nbr, char *base)
{
  int	i;
  int	j;
  int	k;
  int	*res;

  res = malloc(my_strlen(nbr) * sizeof(int));
  i = my_strlen(nbr) - 1;
  k = 0;
  while (i >= 0)
    {
      j = 0;
      while (nbr[i] != base[j])
	{
	  j += 1;
	}
      j += 1;
      res[k] = j;
      k += 1;
      i -= 1;
    }
  return (res);
}

int	my_conv_base(char *nbr, char *base)
{
  int	*res;
  int	result;
  int	i;

  i = 0;
  result = 0;
  res = malloc(my_strlen(nbr) * sizeof(int));
  res = my_conv_base2(nbr, base);
  while (i != my_strlen(nbr))
    {
      result = result + ((res[i] - 1) * (my_power_it(my_strlen(base), i)));
      i += 1;
    }
  return (result);
}
