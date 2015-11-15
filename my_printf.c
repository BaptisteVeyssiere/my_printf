/*
** my_printf.c for my_printf in /home/VEYSSI_B/rendu/test
** 
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
** 
** Started on  Mon Oct 19 18:55:46 2015 Baptiste veyssiere
** Last update Sun Nov 15 21:08:45 2015 Baptiste veyssiere
*/

#include <stdarg.h>
#include "my.h"

void    my_putstr2(unsigned char *s, int *length)
{
  int	i;
  int	nbr;

  i = 0;
  while (s[i] != 0)
    {
      if (s[i] < 32)
	{
	  my_putchar(92, length);
	  my_putchar('0', length);
	  if (s[i] < 8)
	    my_putchar('0', length);
	  nbr = s[i];
	  converter(nbr, "01234567", length);
	  i++;
	}
      else
	my_putchar(s[i++], length);
    }
}

void	no_flags(int *key, int *length, char flags, char list)
{
  char	format[] = "+# 0123456789-";
  int	i;

  i = 0;
  while (format[i] != 0 && format[i] != list)
    i++;
  if (flags == 0 && format[i] == 0)
    {
      *key = 1;
      my_putchar('%', length);
    }
}

int	selector(va_list ap, const char *list, int *i, \
		 void (*fptr[])(va_list, const char*, int*, int*))
{
  int	key;
  int	length;
  int	k;
  char	flags[] = "hliducxXbosSp%";

  length = 0;
  key = 0;
  if (list[*i] == '%')
    {
      while (key == 0)
	{
	  *i = *i + 1;
	  k = 0;
	  while (flags[k] != list[*i] && flags[k] != 0)
	    k++;
	  if (flags[k] != 0)
	    {
	      fptr[k](ap, list, i, &length);
	      key = 1;
	    }
	  no_flags(&key, &length, flags[k], list[*i]);
	}
    }
  return (length);
}

int	pointer(va_list ap, const char *format, int *i)
{
  int	length;
  void	(*fptr[])(va_list, const char*, int*, int*) =
    {
      case_short,
      case_long,
      case_integer,
      case_integer,
      case_unsigned,
      case_char,
      case_hexa,
      case_hexa_maj,
      case_bin,
      case_octa,
      case_string,
      case_str_octa,
      case_pointer,
      case_percent,
      0,
    };

  length = 0;
  length = selector(ap, format, i, fptr);
  return (length);
}

int	my_printf(const char *format, ...)
{
  va_list	ap;
  int	i;
  int	length;

  length = 0;
  va_start(ap, format);
  i = 0;
  while (format[i] != 0)
    {
      if (format[i] != '%')
	{
	  my_putchar(format[i], &length);
	  i++;
	}
      length += pointer(ap, format, &i);
    }
  va_end(ap);
  return (length);
}
