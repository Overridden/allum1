/*
** my_strlen.c for lib in /home/nguye_1//afs_loc/lib
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Sun Nov 18 01:11:04 2012 alexandre1 nguyen
** Last update Sun Nov 18 01:13:15 2012 alexandre1 nguyen
*/

int	my_strlen(char *str)
{
  int	n;

  n = 0;
  while (str[n] != 0)
    {
      n = n + 1;
    }
  if (str[n] == 0)
    {
      return(n);
    }
}
