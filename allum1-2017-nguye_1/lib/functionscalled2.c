/*
** functionscalled2.c for printf in /home/nguye_1//afs_loc/printfduo
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Sun Nov 18 01:23:37 2012 alexandre1 nguyen
** Last update Sun Nov 18 01:27:52 2012 alexandre1 nguyen
*/

#include <stdlib.h>
#include <stdarg.h>
#include "list.h"

int	f_x(int str)
{
    base_16(str);
}

int	f_X(int str)
{
    base_16_c(str);
}

int	f_o(int str)
{
    base_8(str);
}

int	f_b(unsigned int str)
{
    base_2(str);
}
