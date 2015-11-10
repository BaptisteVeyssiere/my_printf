/*
** convert_and_epur.c for bistromathique in /home/VEYSSI_B/rendu/test/bistromathique/multiplication
** 
** Made by Baptiste veyssiere
** Login   <VEYSSI_B@epitech.net>
** 
** Started on  Tue Oct 27 12:24:55 2015 Baptiste veyssiere
** Last update Mon Nov  9 11:13:01 2015 Baptiste veyssiere
*/

void     converter(int nbr, char *base)
{
  char	s[32];
  int	j;

  j = 0;
  s[j++] = base[nbr % my_strlen(base)];
  while (nbr >= my_strlen(base))
    {
      nbr /= my_strlen(base);
      s[j++] = base[nbr % my_strlen(base)];
    }
  s[j] = 0;
  my_revstr(s);
  my_putstr(s);
}
