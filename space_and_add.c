/*
** space_and_add.c for my_printf in /home/VEYSSI_B/rendu/PSU_2015_my_printf
** 
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
** 
** Started on  Tue Nov 10 15:00:09 2015 Baptiste veyssiere
** Last update Mon Nov 16 19:52:45 2015 Baptiste veyssiere
*/

void	space_and_add(int i, const char *list, char *s, int *length)
{
  i -= 1;
  if (s[0] != '-')
    {
      while (list[i] == ' ')
	i--;
      if (list[i] == '+')
	my_putchar('+', length);
      else if (list[i + 1] == ' ')
	my_putchar(' ', length);
    }
}
