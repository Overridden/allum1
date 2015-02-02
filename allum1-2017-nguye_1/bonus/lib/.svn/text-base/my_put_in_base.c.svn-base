/*
** noelleboss.c for noel in /home/nguye_1//afs_loc/projects/102chiffrement-2017-lastru_g/lib
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Mon Nov 26 20:35:53 2012 alexandre1 nguyen
** Last update Tue Nov 27 19:28:50 2012 alexandre1 nguyen
*/

void	my_put_in_base(int nb, char *base)
{
  if (nb < 0)
    {
      nb = nb * -1;
      my_putchar('-');
    }
  if (nb >= my_strlen(base))
    {
      my_put_in_base(nb / my_strlen(base), base);
      my_put_in_base(nb % my_strlen(base), base);
    }
  else
    my_putchar(base[nb]);
}
