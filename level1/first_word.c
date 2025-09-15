/*Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Write a program that takes a string and displays its first word, followed by a
newline.*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc <= 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[argc -1][i] == ' ' || argv[argc - 1][i] == '\t')
		i++;
	while (argv[argc -1][i] != ' ' && argv[argc -1][i] != '\t' && argv[argc -1][i] != '\0')
	{
		write(1, &argv[argc -1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
