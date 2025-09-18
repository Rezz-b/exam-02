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
	char	temp;

	i = 0;
	while (str[i])
		i++;
	j = 0;
	while (j < i)
	{
		temp = str[j];
		str[j] = str[i - 1];
		str[i - 1] = temp;
		j++;
		i--;
	}
	return (str);

}
#include <stdio.h>

int	main(void)
{
	char	s[] = "i can see";
	
	printf("%s\n", ft_strrev(s));
	return (0);
}
