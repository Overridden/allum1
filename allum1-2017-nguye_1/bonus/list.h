/*
** list.h for allum1 in /home/nguye_1//afs_loc/projects/tmp/allum1
** 
** Made by alexandre1 nguyen
** Login   <nguye_1@epitech.net>
** 
** Started on  Mon Feb  4 15:30:40 2013 alexandre1 nguyen
** Last update Sat Feb 16 14:01:36 2013 alexandre1 nguyen
*/

#ifndef LIST_H_
# define LIST_H_

typedef struct		s_term
{
  char			*cm;
  char			*cl;
  char			*gt;
  char			*us;
  char			*me;
  char			*mr;
  char			*vi;
  char			*ve;
}			t_term;

typedef struct		s_param
{
  char			*buf;
  int			k;
  int			nb;
  int			po;
  int			po_ia;
  int			turn;
  int			allums_remaining;
  int			*marker;
  int			**allums;
  struct s_term		term;
}			t_param;

int		my_putstr(char *);
int		my_printf(const char *, ...);
int		my_getnbr(char *);
int		mallocing(t_param *, char **);
void		main_loop(t_param *);
void		main_loop_bis(t_param *);
int		selection_loop(t_param *);
void		selection_loop_bis(t_param *);
int		ia(t_param *);
int		del_nbr(t_param *);
int		one_match(t_param *, int);
int		two_matches(t_param *, int);
int		two_matches_case_six(t_param *, int);
int		two_matches_case_five(t_param *, int);
int		two_matches_case_four(t_param *, int);
int		two_matches_case_three(t_param *, int);
int		two_matches_case_two(t_param *, int);
int		two_matches_case_one(t_param *, int);
int		three_matches(t_param *, int);
int		more_than_three_matches(t_param *, int);
int		check_two_match(t_param *);
int		check_one_match(t_param *);
int		not_empty_lines(t_param *);
int		not_empty_lines_next(t_param *);
int		not_empty_lines_next_k(t_param *);
int		lines_left(t_param *);
int		allums_per_line(t_param *, int);
int		del_ia(t_param *);
int		del(t_param *);
void		won(t_param *);
void		lost(t_param *);
int		display(t_param *);
void		display_bis(t_param *, int, int, int);
void		display_bisbis(t_param *, int, int, int);
void		image(t_param *);
int		allum(t_param *, int, int);
int		allum_bis(t_param *, int, int, int);
void		allum_bisbis(t_param *, int, int, int);
void		loose();
void		win();
void		ias_turn();
void		your_turn();
int		**init_int_tab(int **, int, t_param *);
int		setting(t_param *);
int		safety_exit(t_param *);
int		main(int, char **);
void		my_putchar(char);
int		my_isneg(int);
int		my_put_nbr(int);
int		my_swap(int *, int *);
int		my_putstr(char *);
int		my_strlen(char *);
int		my_getnbr(char *);
int		my_getnbr_unsigned(char *);
void		my_sort_int_tab(int *, int);
int		my_power_rec(int, int);
int		my_square_root(int);
int		my_is_prime(int);
int		my_find_prime_sup(int);
char		*my_strcpy(char *, char *);
char		*my_strncpy(char *, char *, int);
char		*my_revstr(char *);
char		*my_strstr(char *, char *);
int		my_strcmp(char *, char *);
int		my_strncmp(char *, char *, int);
char		*my_strupcase(char *);
char		*my_strlowcase(char *);
char		*my_strcapitalize(char *);
int		my_str_isalpha(char *);
int		my_str_isnum(char *);
int		my_str_islower(char *);
int		my_str_isupper(char *);
int		my_str_isprintable(char *);
int		my_showstr(char *);
int		my_showmem(char *, int);
char		*my_strcat(char *, char *);
char		*my_strncat(char *, char *, int);
int		my_strlcat(char *, char *, int);
int		my_put_nbr_short(int);
int		my_put_nbr_long(long int);
int		my_getnbr(char *);
unsigned int	nbr_len2(unsigned int);
unsigned int	base_2(unsigned int);
int		nbr_len8(int);
int		base_8(int);
unsigned int	nbr_len16_c(unsigned int);
unsigned int	base_16_c(unsigned int);
unsigned int	base_16(unsigned int);
unsigned int	base_16p(unsigned int);
int		f_s(char*);
int		f_u(unsigned int);
int		f_di(int);
int		f_c(int);
int		f_b(unsigned int);
int		f_x(int);
int		f_X(int);
int		f_o(int);
int		f_per();
int		f_S(char *);
int		f_p(unsigned int);
int		f_ld(long int);
int		s(va_list);
int		f_hd(int);
int		hd(va_list);
int		u(va_list);
int		di(va_list);
int		c(va_list);
int		b(va_list);
int		x(va_list);
int		X(va_list);
int		o(va_list);
int		per(va_list);
int		S(va_list);
int		p(va_list);
int		ld(va_list);

#endif /* LIST_H_ */
