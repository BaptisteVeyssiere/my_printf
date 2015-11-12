/*
** case3.c for my_printf in /home/VEYSSI_B/rendu/PSU_2015_my_printf
** 
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
** 
** Started on  Sun Nov  8 21:35:27 2015 Baptiste veyssiere
** Last update Thu Nov 12 18:47:51 2015 Baptiste veyssiere
*/

#include <stdarg.h>
#include <stdlib.h>
#include "my.h"

void    case_unsigned_short(va_list ap, const char *list, int *i, int *length)
{
  char  *s;

  s = my_put_ushort(va_arg(ap, int));
  if (s[0] == 0)
    my_putchar('0', length);
  else
    my_putstr(s, length);
  free(s);
  *i += 1;
}

void    case_unsigned_long(va_list ap, const char *list, int *i, int *length)
{
  char  *s;

  s = my_put_ulong(va_arg(ap, unsigned long));
  if (s[0] == 0)
    my_putchar('0', length);
  else
    my_putstr(s, length);
  free(s);
  *i +=1;
}

void    case_hexa_maj(va_list ap, const char *list, int *i, int *length)
{
  if (list[*i - 1] == '#')
    my_putstr("0X", length);
  converter(va_arg(ap, unsigned int), "0123456789ABCDEF", length);
  *i +=1;
}

void    case_pointer(va_list ap, const char *list, int *i, int *length)
{
  unsigned long	ptr;
  char		*base;
  char		*s;
  int		j;
 
  s = malloc(sizeof(s));
  ptr = va_arg(ap, unsigned long);
  base = "0123456789abcdef";
  j = 0;
  while ((ptr / 16) > 0)
    {
      s[j++] = base[(ptr % 16)];
      ptr /= 16;
    }
  s[j++] = base[(ptr % 16)];
  s[j] = 0;
  my_putstr("0x", length);
  j = 0;
  my_putstr(my_revstr(s), length);
  free(s);
  *i +=1;
}

void	case_percent(va_list ap, const char *list, int *i, int *length)
{
  my_putchar('%', length);
  *i +=1;
}
