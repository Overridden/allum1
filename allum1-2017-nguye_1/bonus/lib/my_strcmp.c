/*
** my_strcmp.c for my_strcmp in /home/lastru_g//librairie
** 
** Made by gael lastrucci
** Login   <lastru_g@epitech.net>
** 
** Started on  Wed Oct 10 11:19:35 2012 gael lastrucci
** Last update Sun Dec  2 10:09:45 2012 alexandre1 nguyen
*/

int	my_strcmp(char *s1, char *s2)
{
  int	j;

  j = 0;
  while ((s1[j] == s2[j]) && (s1[j] || s2[j]))
    {
      j += 1;
    }
  if (j == (my_strlen(s1)))
    return (0);
  else
    return (1);
}
