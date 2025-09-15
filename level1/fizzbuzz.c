/*Write a program that prints the numbers from 1 to 100, each separated by a
newline.

If the number is a multiple of 3, it prints 'fizz' instead.

If the number is a multiple of 5, it prints 'buzz' instead.

If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.*/

#include <unistd.h>
#include <stdio.h>

void	putnbr(int n)
{
	char	c;

	if (n >= 10)
		putnbr(n/10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	fizzbuzz(int num)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			write(1, "fizzbuzz", 8);
		}
		else if (i % 3 == 0)
		{
			write(1, "fizz", 4);
		}
		else if (i % 5 == 0)
		{
			write(1, "buzz", 4);
		}
		else
		{
			putnbr(i);
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

int	main(void)
{
	int	number;

	number = 1;
	fizzbuzz(number);
	return (0);
}
