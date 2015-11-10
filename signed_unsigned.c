/*
** signed_unsigned.c for my_printf.c in /home/VEYSSI_B/rendu/PSU_2015_my_printf
** 
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
** 
** Started on  Mon Nov  9 17:00:18 2015 Baptiste veyssiere
** Last update Mon Nov  9 19:36:40 2015 Baptiste veyssiere
*/

#include <stdarg.h>

void    case_short(va_list ap, const char *list, int *i)
{
  if (list[*i + 1] == 'i')
    case_signed_short(ap, list, i);
  if (list[*i + 1] == 'u')
    case_unsigned_short(ap, list, i);
  *i += 1;
}

void    case_long(va_list ap, const char *list, int *i)
{
  if (list[*i+ 1] =='i')
    case_signed_long(ap, list, i);
  if (list[*i+ 1] =='u')
    case_unsigned_long(ap, list, i);
  *i += 1;
}
