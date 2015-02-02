/*
** getnextline.c for getnextline in /home/nguye_1//afs_loc/getnextline
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Mon Nov 19 17:42:29 2012 alexandre1 nguyen
** Last update Sun Nov 25 22:08:48 2012 alexandre1 nguyen
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "get_next_line.h"

char	*get_next_line(const int fd)
{
  int		k;
  int		l;
  static int   	j;
  char		*buff;
  char		*buff2;

  buff = malloc(9999);
  buff2 = malloc(5000);
  k = 0;
  l = read(fd, buff, 9999);
  if (l == -1 || buff[j] == 0)
    return (NULL);
  while (buff[j] != '\n' && buff[j] != 0)
    {
      buff2[k] = buff[j];
      j += 1;
      k += 1;
    }
  if (buff[j] == 0) 
    return(buff2);
  j += 1;
  return (buff2);
}
