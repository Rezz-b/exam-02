/*Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);*/

char	*ft_strrev(char *str)
{
	int	i;
	int	j;
	char	*temp;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	while (j < i - 1)
	{
		str[j] = str[i - 1];
		str[i - 1] = tmp;
		tmp = str[j];
		j++;
		i--;
	}
	return (tmp);
}

#include <stdio.h>

int	main(void)
{
	char	*s;
}
