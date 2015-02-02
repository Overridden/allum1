/*
** my_isneg.c for isneg in /home/nguye_1//u/all/nguye_1/rendu/include/lib/my
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Thu Nov  8 16:58:01 2012 alexandre1 nguyen
** Last update Thu Nov  8 16:58:21 2012 alexandre1 nguyen
*/

int	my_isneg(int n)
{
  if (n < 0)
    my_putchar('N');
  else
    my_putchar('P');
  my_putchar('\n');
}
