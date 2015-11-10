/*
** case3.c for my_printf in /home/VEYSSI_B/rendu/PSU_2015_my_printf
** 
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
** 
** Started on  Sun Nov  8 21:35:27 2015 Baptiste veyssiere
** Last update Tue Nov 10 10:56:03 2015 Baptiste veyssiere
*/

#include <stdarg.h>
#include <stdlib.h>

void    case_unsigned_short(va_list ap, const char *list, int *i)
{
  char  *s;

  s = malloc(sizeof(s));
  my_strcpy(s, my_put_ushort(va_arg(ap, int)));
  my_putstr(s);
  free (s);
}

void    case_unsigned_long(va_list ap, const char *list, int *i)
{
  char  *s;

  s = malloc(sizeof(s));
  my_strcpy(s, my_put_ulong(va_arg(ap, unsigned long)));
  my_putstr(s);
  free (s);
}

void    case_hexa_maj(va_list ap, const char *list, int *i)
{
  if (list[*i - 1] == '#')
    my_putstr("0X");
  converter(va_arg(ap, int), "0123456789ABCDEF");
}

void    case_pointer(va_list ap, const char *list, int *i)
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
  my_putstr("0x");
  j = 0;
  my_putstr(my_revstr(s));
  free(s);
}

void	case_percent(va_list ap, const char *list, int *i)
{
  my_putchar('%');
}
