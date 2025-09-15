#include <stdio.h>

void	ft_swap(int	*a, int	*b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}

int	main(void)
{
	int	t = 3;
	int	p = 8;

	printf("before swap: %d,%d\n", t, p);
	ft_swap(&t, &p);
	printf("after: %d, %d\n", t, p);
	return (0);
}
