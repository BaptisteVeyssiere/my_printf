/*
** my.h for my_printf in /home/VEYSSI_B/rendu/PSU_2015_my_printf
** 
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
** 
** Started on  Sat Nov  7 21:03:49 2015 Baptiste veyssiere
** Last update Sun Nov 15 20:42:37 2015 Baptiste veyssiere
*/

#ifndef MY_H_
# define MY_H_

void	my_putstr2(unsigned char*, int*);
int	selector(va_list, const char*, int*, void (*[])(va_list, const char*, int*, int*));
void	no_flags(int*, int*, char, char);
int	my_printf(const char*, ...);
int     pointer(va_list, const char*, int*);
void    case_short(va_list, const char*, int*, int*);
void    case_long(va_list, const char*, int*, int*);
void	converter(unsigned int, char*, int*);
void	case_hexa(va_list, const char*, int*, int*);
void	case_hexa_maj(va_list, const char*, int*, int*);
void	case_integer(va_list,const char*, int*, int*);
void	case_octa(va_list, const char*, int*, int*);
void	case_bin(va_list, const char*, int*, int*);
void	case_string(va_list, const char*, int*, int*);
void	case_str_octa(va_list, const char*, int*, int*);
void	case_char(va_list, const char*, int*, int*);
void    case_signed_short(va_list, const char*, int*, int*);
void    case_signed_long(va_list, const char*, int*, int*);
void    case_unsigned(va_list, const char*, int*, int*);
void    case_unsigned_short(va_list, const char*, int*, int*);
void    case_unsigned_long(va_list, const char*, int*, int*);
void	case_pointer(va_list, const char*, int*, int*);
void	case_percent(va_list, const char*, int*, int*);
void	space_and_add(int, const char*, char*, int*);
char	*my_put_nbr(int);
char	*my_put_short(short);
char	*my_put_long(long);
char	*my_put_unsigned(unsigned int);
char	*my_put_ushort(unsigned short);
char	*my_put_ulong(unsigned long);
int     loop_i(int*, char*, int*);
int     loop_s(short*, char*, int*);
int     loop_l(long*, char*, int*);
void	my_putchar(char, int*);
void	my_putstr(char*, int*);
int	my_strlen(char*);
char	*my_revstr(char*);

#endif
