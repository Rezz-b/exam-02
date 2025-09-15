#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

#include <stdio.h>

int	main(void)
{
	const char *a = "";
	const char *b = "abc";

	printf("%zu\n", ft_strcspn(a, b));
	return (0);
}
