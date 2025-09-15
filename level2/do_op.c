#include "DO_OP.h"

int	main(int	argc, char	**argv)
{
	int	f;
	int	s;
	int	re;

	f = atoi(argv[1]);
	s = atoi(argv[3]);

	if (argc == 4)
	{
		if (argv[2][0] == '+')
			re = f + s;
		else if (argv[2][0] == '-')
			re = f - s;
		else if (argv[2][0] == '*')
			re = f * s;
		else if (argv[2][0] == '/')
			re = f / s;
		else if (argv[2][0] == '%')
			re = f % s;
		printf("%d\n", re);
	}
	printf("\n");
}
