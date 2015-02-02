/*
** list.h for printf in /home/nguye_1//afs_loc/printfduo
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Wed Nov 14 14:18:52 2012 alexandre1 nguyen
** Last update Mon Feb  4 15:25:27 2013 alexandre1 nguyen
*/

#ifndef H_LIST_
# define H_LIST_

void	my_putchar(char c);
int	my_isneg(int nb);
int	my_put_nbr(int nb);
int	my_swap(int *a, int *b);
int	my_putstr(char *str);
int	my_strlen(char *str);
int	my_getnbr(char *str);
int	my_getnbr_unsigned(char *str);
void	my_sort_int_tab(int *tab, int size);
int	my_power_rec(int nb, int power);
int	my_square_root(int nb);
int	my_is_prime(int nombre);
int	my_find_prime_sup(int nb);
char	*my_strcpy(char *dest, char *src);
char	*my_strncpy(char *dest, char *src, int nb);
char	*my_revstr(char *str);
char	*my_strstr(char *str, char *to_find);
int	my_strcmp(char *s1, char *s2);
int	my_strncmp(char *s1, char *s2, int nb);
char	*my_strupcase(char *str);
char	*my_strlowcase(char *str);
char	*my_strcapitalize(char *str);
int	my_str_isalpha(char *str);
int	my_str_isnum(char *str);
int	my_str_islower(char *str);
int	my_str_isupper(char *str);
int	my_str_isprintable(char *str);
int	my_showstr(char *str);
int	my_showmem(char *str, int size);
char	*my_strcat(char *dest, char *src);
char	*my_strncat(char *dest, char *src, int nb);
int	my_strlcat(char *dest, char *src, int size);
int	my_put_nbr_short(int nbr);
int	my_put_nbr_long(long int nbr);
int	my_getnbr(char *);
unsigned int	nbr_len2(unsigned int n);
unsigned int	base_2(unsigned int nbr_in);
int	nbr_len8(int n);
int	base_8(int nbr_in);
unsigned int	nbr_len16_c(unsigned int n);
unsigned int	base_16_c(unsigned int nbr_in);
unsigned int	base_16(unsigned int nbr_in);
unsigned int	base_16p(unsigned int nbr_in);
int	f_s(char*);
int	f_u(unsigned int);
int	f_di(int);
int	f_c(int);
int	f_b(unsigned int);
int	f_x(int);
int	f_X(int);
int	f_o(int);
int	f_per();
int	f_S(char *);
int	f_p(unsigned int str);
int	f_ld(long int);
int	s(va_list ap);
int	f_hd(int);
int	hd(va_list ap);
int	u(va_list ap);
int	di(va_list ap);
int	c(va_list ap);
int	b(va_list ap);
int	x(va_list ap);
int	X(va_list ap);
int	o(va_list ap);
int	per(va_list ap);
int	S(va_list ap);
int	p(va_list ap);
int	ld(va_list ap);

#endif /*  H_LIST_ */
