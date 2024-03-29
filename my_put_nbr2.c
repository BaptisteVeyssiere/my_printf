/*
** my_put_nbr2.c for my_printf in /home/VEYSSI_B/rendu/PSU_2015_my_printf
** 
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
** 
** Started on  Sun Nov  8 21:43:26 2015 Baptiste veyssiere
** Last update Sun Nov 15 21:11:26 2015 Baptiste veyssiere
*/

#include <stdlib.h>

char    *my_put_unsigned(unsigned int nb)
{
  char  *s;
  int   i;

  s = malloc(11);
  i = 0;
  while (nb > 0)
    {
      s[i++] = (nb % 10) + 48;
      nb = nb - s[i - 1] + 48;
      nb /= 10;
    }
  s[i] = 0;
  my_revstr(s);
  s[i] = 0;
  return (s);
}

int	loop_i(int *nb, char *s, int *i)
{
  if (*nb <= 0)
    return (0);
  s[*i] = (*nb % 10) + 48;
  *i += 1;
  *nb = *nb - s[*i - 1] + 48;
  *nb /= 10;
  loop_i(nb, s, i);
}

int     loop_l(long *nb, char *s, int *i)
{
  if (*nb <= 0)
    return (0);
  s[*i] = (*nb % 10) + 48;
  *i += 1;
  *nb = *nb - s[*i - 1] + 48;
  *nb /= 10;
  loop_l(nb, s, i);
}

int     loop_s(short *nb, char *s, int *i)
{
  if (*nb <= 0)
    return (0);
  s[*i] = (*nb % 10) + 48;
  *i += 1;
  *nb = *nb - s[*i - 1] + 48;
  *nb /= 10;
  loop_s(nb, s, i);
}
