/*Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.*/

#include <unistd.h>
#include <stdio.h>

int	main(int	argc, char	**argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == 90 || argv[1][i] == 122)
				argv[1][i] -= 25;
			else if ((argv[1][i] >= 65 && argv[1][i] <= 89) 
					|| (argv[1][i] >= 97 && argv[1][i] <= 121))
				argv[1][i] += 1;
			write(1, &argv[1][i], 1);
			i++;
		}

	}
	write(1, "\n", 1);
}
