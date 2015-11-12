/*
** case2.c for my_printf in /home/VEYSSI_B/rendu/PSU_2015_my_printf
** 
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
** 
** Started on  Sat Nov  7 20:59:57 2015 Baptiste veyssiere
** Last update Thu Nov 12 18:19:46 2015 Baptiste veyssiere
*/

#include <stdarg.h>
#include <stdlib.h>
#include "my.h"

void    case_string(va_list ap, const char *list, int *i)
{
  my_putstr(va_arg(ap, char *));
}

void    case_integer(va_list ap, const char *list, int *i)
{
  char  *s;

  s = my_put_nbr(va_arg(ap, int));
  space_and_add(*i, list, s);
  if (s[0] == 0)
    my_putchar('0');
  else
    my_putstr(s);
  free(s);
}

void    case_signed_short(va_list ap, const char *list, int *i)
{
  char	*s;

  s = my_put_short(va_arg(ap, int));
  space_and_add(*i, list, s);
  if (s[0] == 0)
    my_putchar('0');
  else
    my_putstr(s);
  free(s);
}

void    case_signed_long(va_list ap, const char *list, int *i)
{
  char  *s;

  s = my_put_long(va_arg(ap, long));
  space_and_add(*i, list, s);
  if (s[0] == 0)
    my_putchar('0');
  else
    my_putstr(s);
  free(s);
}

void    case_unsigned(va_list ap, const char *list, int *i)
{
  char  *s;

  s = my_put_long(va_arg(ap, unsigned int));
  if (s[0] == 0)
    my_putchar('0');
  else
    my_putstr(s);
  free(s);
}
