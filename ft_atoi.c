/*Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.
*/

int	*ft_atoi(const	char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] >= 9 && str[i] <= 13 || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
		{
			result = (result * 10) + (str[i] - '0');
			i++;
		}

	return (result *= sign);
}

#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	s[] = "555 4";
	printf("%d\n", ft_atoi(s));
	printf("%d\n", atoi(s));
	return (0);
}
