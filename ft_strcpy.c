#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

int	main(void)
{
	char str[]= "";
	char str1[20];

	ft_strcpy(str, str1);
	printf("%s\n", str1);
	return (0);
}
