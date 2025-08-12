Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Write a program that takes a string and displays its first word, followed by a
newline.

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argv[1] == '\0')
	{
		write(1, "\n", 1);
	}

}
