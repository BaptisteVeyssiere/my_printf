/*
** my.h for my_printf in /home/VEYSSI_B/rendu/PSU_2015_my_printf
** 
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
** 
** Started on  Sat Nov  7 21:03:49 2015 Baptiste veyssiere
** Last update Thu Nov 12 18:04:52 2015 Baptiste veyssiere
*/

#ifndef MY_H_
# define MY_H_

void	my_putstr2(unsigned char*);
void	selector(va_list, const char*, int*, void (*[])(va_list, const char*, int*));
void	no_flags(int*);
void	my_printf(const char*, ...);
void    case_short(va_list, const char*, int*);
void    case_long(va_list, const char*, int*);
void	converter(int, char*);
void	case_hexa(va_list, const char*, int*);
void	case_hexa_maj(va_list, const char*, int*);
void	case_integer(va_list,const char*, int*);
void	case_octa(va_list, const char*, int*);
void	case_bin(va_list, const char*, int*);
void	case_string(va_list, const char*, int*);
void	case_S(va_list, const char*, int*);
void	case_char(va_list, const char*, int*);
void    case_signed_short(va_list, const char*, int*);
void    case_signed_long(va_list, const char*, int*);
void    case_unsigned(va_list, const char*, int*);
void    case_unsigned_short(va_list, const char*, int*);
void    case_unsigned_long(va_list, const char*, int*);
void	case_pointer(va_list, const char*, int*);
void	case_percent(va_list, const char*, int*);
void	space_and_add(int, const char*, char*);
char	*my_put_nbr(int);
char	*my_put_short(short);
char	*my_put_long(long);
char	*my_put_unsigned(unsigned int);
char	*my_put_ushort(unsigned short);
char	*my_put_ulong(unsigned long);
int     loop_i(int*, char*, int*);
int     loop_s(short*, char*, int*);
int     loop_l(long*, char*, int*);

#endif /* MY_H_ */
