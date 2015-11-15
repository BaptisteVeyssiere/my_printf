/*
** my_putstr.c for my_putstr in /home/VEYSSI_B/rendu/PSU_2015_my_printf
** 
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
** 
** Started on  Sat Nov  7 21:01:49 2015 Baptiste veyssiere
** Last update Sun Nov 15 21:02:44 2015 Baptiste veyssiere
*/

void	my_putstr(char *s, int *length)
{
  while (*s != 0)
    my_putchar(*s++, length);
}
