/*
** my_factorielle_rec.c for factorielle rec in /home/nguye_1//u/all/nguye_1/rendu/include/lib/my
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Thu Nov  8 16:20:00 2012 alexandre1 nguyen
** Last update Thu Nov  8 16:25:32 2012 alexandre1 nguyen
*/

#include <stdio.h>

int	my_factorielle_rec(int nb)
{
  if (nb < 0)
    return (0);
  else if (nb == 0)
    return (1);
  else
    return (nb * my_factorielle_rec(nb - 1));
}
