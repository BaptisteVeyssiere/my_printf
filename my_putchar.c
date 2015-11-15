/*
** my_putchar.c for my_putchar in /home/VEYSSI_B/rendu/PSU_2015_my_printf
** 
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
** 
** Started on  Sat Nov  7 21:01:13 2015 Baptiste veyssiere
** Last update Sun Nov 15 20:59:13 2015 Baptiste veyssiere
*/

void	my_putchar(char c, int *length)
{
  write(1, &c, 1);
  *length += 1;
}
