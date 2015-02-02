/*
** my_put_nbr.c for put nbr in /home/nguye_1//u/all/nguye_1/rendu/include/lib/my
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Thu Nov  8 16:59:17 2012 alexandre1 nguyen
** Last update Sun Nov 18 18:17:52 2012 alexandre1 nguyen
*/

void	my_put_nbr(int nb)
{
  int	p;
  int	q;

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

void	my_put_nbr_long(long int nb)
{
  long int	p;
  long int	q;

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

void	my_put_nbr_short(int nb1)
{
  short int	p;
  short	int	q;
  short int	nb;

  nb = nb1;
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
