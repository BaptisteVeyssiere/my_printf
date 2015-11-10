/*
** case1.c for my_printf in /home/VEYSSI_B/rendu/PSU_2015_my_printf
** 
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
** 
** Started on  Sat Nov  7 20:57:15 2015 Baptiste veyssiere
** Last update Tue Nov 10 16:44:12 2015 Baptiste veyssiere
*/

#include <stdarg.h>

void    case_hexa(va_list ap, const char *list, int *i)
{
  if (list[*i - 1] == '#')
    my_putstr("0x");
  converter(va_arg(ap, unsigned int), "0123456789abcdef");
}

void    case_char(va_list ap, const char *list, int *i)
{
  my_putchar(va_arg(ap, int));
}

void    case_bin(va_list ap, const char *list, int *i)
{
  converter(va_arg(ap, unsigned int), "01");
}

void    case_S(va_list ap, const char *list, int *i)
{
  my_putstr2(va_arg(ap, unsigned char *));
}

void    case_octa(va_list ap, const char *list, int *i)
{
  if (list[*i - 1] == '#')
    my_putchar('0');
  converter(va_arg(ap, unsigned int), "01234567");
}
