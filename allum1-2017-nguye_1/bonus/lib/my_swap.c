/*
** my_swap.c for swapo in /home/nguye_1//u/all/nguye_1/rendu/include/lib/my
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Thu Nov  8 16:55:28 2012 alexandre1 nguyen
** Last update Wed Nov 28 21:19:43 2012 alexandre1 nguyen
*/

int	my_swap(int *a, int *b)
{
  int	c;

  c = *a;
  *a = *b;
  *b = c;
}

int	main()
{
  int	i;
  int	j;

  i = 0;
  j = 1;
  my_swap(&i, &j);
  my_printf("%d %d", i, j);
}
