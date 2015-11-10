/*
** case4.c for my_printf in /home/VEYSSI_B/rendu/PSU_2015_my_printf
** 
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
** 
** Started on  Tue Nov 10 10:42:43 2015 Baptiste veyssiere
** Last update Tue Nov 10 10:44:09 2015 Baptiste veyssiere
*/

#include <stdarg.h>

void	case_space(va_list ap, const char *list, int *i)
{
  if (list[*i + 1] != ' ')
    my_putchar(' ');
}
