/*
** case2.c for my_printf in /home/VEYSSI_B/rendu/PSU_2015_my_printf
** 
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
** 
** Started on  Sat Nov  7 20:59:57 2015 Baptiste veyssiere
** Last update Mon Nov  9 17:18:36 2015 Baptiste veyssiere
*/

#include <stdarg.h>
#include <stdlib.h>

void    case_string(va_list ap, const char *list, int *i)
{
  my_putstr(va_arg(ap, char *));
}

void    case_integer(va_list ap, const char *list, int *i)
{
  char  *s;

  s = malloc(sizeof(s));
  my_strcpy(s, my_put_nbr(va_arg(ap, int)));
  if (list[*i - 1] == '+' && s[0] != '-')
    my_putchar('+');
  my_putstr(s);
  free (s);
}

void    case_signed_short(va_list ap, const char *list, int *i)
{
  char	*s;

  s = malloc(sizeof(s));
  my_strcpy(s, my_put_short(va_arg(ap, int)));
  if (list[*i - 1] == '+' && s[0] != '-')
    my_putchar('+');
  my_putstr(s);
  free (s);
}

void    case_signed_long(va_list ap, const char *list, int *i)
{
  char  *s;

  s = malloc(sizeof(s));
  my_strcpy(s, my_put_long(va_arg(ap, long)));
  if (list[*i - 1] == '+' && s[0] != '-')
    my_putchar('+');
  my_putstr(s);
  free (s);
}

void    case_unsigned(va_list ap, const char *list, int *i)
{
  char  *s;

  s = malloc(sizeof(s));
  my_strcpy(s, my_put_long(va_arg(ap, unsigned int)));
  my_putstr(s);
  free (s);
}
