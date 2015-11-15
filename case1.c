/*
** case1.c for my_printf in /home/VEYSSI_B/rendu/PSU_2015_my_printf
** 
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
** 
** Started on  Sat Nov  7 20:57:15 2015 Baptiste veyssiere
** Last update Sun Nov 15 20:42:14 2015 Baptiste veyssiere
*/

#include <stdarg.h>

void    case_hexa(va_list ap, const char *list, int *i, int *length)
{
  if (list[*i - 1] == '#')
    my_putstr("0x", length);
  converter(va_arg(ap, unsigned int), "0123456789abcdef", length);
  *i += 1;
}

void    case_char(va_list ap, const char *list, int *i, int *length)
{
  my_putchar(va_arg(ap, int), length);
  *i += 1;
}

void    case_bin(va_list ap, const char *list, int *i, int *length)
{
  converter(va_arg(ap, unsigned int), "01", length);
  *i += 1;
}

void    case_str_octa(va_list ap, const char *list, int *i, int *length)
{
  my_putstr2(va_arg(ap, unsigned char *), length);
  *i += 1;
}

void    case_octa(va_list ap, const char *list, int *i, int *length)
{
  if (list[*i - 1] == '#')
    my_putchar('0', length);
  converter(va_arg(ap, unsigned int), "01234567", length);
  *i += 1;
}
