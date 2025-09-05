#include <unistd.h>
#include <stdio.h>
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str[i])
		return ;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char	*s;

	s = " ";
	ft_putstr(s);
	printf("\n");
	return (0);
}
