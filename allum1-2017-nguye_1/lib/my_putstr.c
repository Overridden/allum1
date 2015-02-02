/*
** my_putstr.c for my_putstr in /home/lastru_g//librairie
** 
** Made by gael lastrucci
** Login   <lastru_g@epitech.net>
** 
** Started on  Wed Oct 10 10:37:46 2012 gael lastrucci
** Last update Wed Oct 10 10:41:40 2012 gael lastrucci
*/

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}
