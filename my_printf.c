/*
** my_printf.c for my_printf in /home/VEYSSI_B/rendu/test
** 
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
** 
** Started on  Mon Oct 19 18:55:46 2015 Baptiste veyssiere
** Last update Thu Nov 12 10:20:55 2015 Baptiste veyssiere
*/

#include <stdarg.h>
#include <stdlib.h>
#include "my.h"

void    my_putstr2(unsigned char *s)
{
  int	i;
  int	nbr;

  i = 0;
  while (s[i] != 0)
    {
      if (s[i] < 32)
	{
	  my_putchar(92);
	  my_putchar('0');
	  if (s[i] < 8)
	    my_putchar('0');
	  nbr = s[i];
	  converter(nbr, "01234567");
	  i++;
	}
      else
	my_putchar(s[i++]);
    }
}

void	no_flags(int *key)
{
  *key = 1;
  my_putchar('%');
}

void	selector(va_list ap, const char *list, int *i, \
		 void (*fptr[])(va_list, const char*, int*))
{
  int	key;
  int	j;
  int	k;
  char	flags[] = "hliducxXbosSp%";

  j = 0;
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
	      fptr[k](ap, list, i);
	      *i += 1;
	      key = 1;
	    }
	  if (flags[k] == 0 && list[*i] != '+' && list[*i] != '#' && list[*i] != ' ')
	    no_flags(&key);
	}
    }
}

void	pointer(va_list ap, const char *format, int *i)
{
  void	(*fptr[])(va_list, const char*, int*) =
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
      case_S,
      case_pointer,
      case_percent,
      0,
    };

  selector(ap, format, i, fptr);
}

void	my_printf(const char *format, ...)
{
  va_list	ap;
  int		i;

  va_start(ap, format);
  i = 0;
  while (format[i] != 0)
    {
      if (format[i] != '%')
	{
	  my_putchar(format[i]);
	  i++;
	}
      pointer(ap, format, &i);
    }
  va_end(ap);
}
