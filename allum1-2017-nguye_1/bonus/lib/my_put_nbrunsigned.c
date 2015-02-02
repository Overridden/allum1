/*
** my_put_nbrunsigned.c for unsigned put nbr in /home/nguye_1//u/all/nguye_1/rendu/include/lib/my
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Thu Nov  8 16:17:31 2012 alexandre1 nguyen
** Last update Thu Nov  8 16:25:56 2012 alexandre1 nguyen
*/

void	my_put_nbrunsigned(unsigned int nb)
{
  unsigned int	p;
  unsigned int	q;

  p = 1;
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  while (p <= (nb / 10))
    p = p * 10;
  while (p != 0)
    {
      q = nb / p;
      my_putchar(q + '0');
      nb = nb % p;
      p = p / 10;
    }
}
