/*
** my_getnbr.c for getnbr in /home/nguye_1//u/all/nguye_1/rendu/include/lib/my
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Thu Nov  8 16:34:41 2012 alexandre1 nguyen
** Last update Fri Nov 16 14:08:18 2012 alexandre1 nguyen
*/

#include "my.h"

int	countless1(char *str)
{
  int	c;
  int	cpt;

  c = 0;
  cpt = 0;
  while ((str[c] == '-' || str[c] == '+') && str[c] != 0)
    {
      if (str[c] == '-')
        cpt += 1;
      if (str[c] == '+')
        cpt = cpt;
      c += 1;
    }
  return (cpt);
}

int	defil1(char *str)
{
  int	i;

  i = 0;
  while (str[i] == '-' || str[i] == '+')
    i += 1;
  return (i);
}

int	my_getnbr(char *str)
{
  int	res;
  int	cpt;
  int	i;

  cpt = 1;
  res = 0;

  cpt = cpt * my_power_rec((-1), countless1(str));
  i = defil1(str);
  while (str[i] != 0 && str[i] >= '0' && str[i] <= '9')
    {
      res = res * 10;
      res = res + str[i] - '0';
      i = i + 1;
      if (res < 0)
        return (0);
    }
  if (cpt == (-1))
    res = res * (-1);
  return (res);
}

