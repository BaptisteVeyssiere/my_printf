/*
** my_put_nbr.c for my_put_nbr in /home/VEYSSI_B/rendu/Piscine_C_J03
** 
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
** 
** Started on  Wed Sep 30 19:05:04 2015 Baptiste veyssiere
** Last update Thu Nov 12 16:36:05 2015 Baptiste veyssiere
*/

#include <stdlib.h>

char	*my_put_nbr(int nb)
{
  char	*s;
  int	i;
  int	key;

  key = 0;
  s = malloc(12);
  if (nb < 0)
    {
      key = 1;
      nb *= -1;
    }
  i = 0;
  while (nb > 0)
    {
      s[i++] = (nb % 10) + 48;
      nb = nb - s[i - 1] + 48;
      nb /= 10;
    }
  if (key == 1)
    s[i++] = '-';
  s[i] = 0;
  my_revstr(s);
  s[i] = 0;
  return (s);
}

char    *my_put_short(short nb)
{
  char  *s;
  int   i;
  int   key;

  key = 0;
  s = malloc(12);
  if (nb < 0)
    {
      key = 1;
      nb *= -1;
    }
  i = 0;
  while (nb > 0)
    {
      s[i++] = (nb % 10) + 48;
      nb = nb - s[i - 1] + 48;
      nb /= 10;
    }
  if (key == 1)
    s[i++] = '-';
  s[i] = 0;
  my_revstr(s);
  s[i] = 0;
  return (s);
}
char    *my_put_long(long nb)
{
  char  *s;
  int   i;
  int   key;

  key = 0;
  s = malloc(12);
  if (nb < 0)
    {
      key = 1;
      nb *= -1;
    }
  i = 0;
  while (nb > 0)
    {
      s[i++] = (nb % 10) + 48;
      nb = nb - s[i - 1] + 48;
      nb /= 10;
    }
  if (key == 1)
    s[i++] = '-';
  s[i] = 0;
  my_revstr(s);
  s[i] = 0;
  return (s);
}

char    *my_put_ulong(unsigned long nb)
{
  char  *s;
  int   i;

  s = malloc(12);
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

char    *my_put_ushort(unsigned short nb)
{
  char  *s;
  int   i;

  s = malloc(12);
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
