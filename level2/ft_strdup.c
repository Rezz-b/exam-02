/*Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
    int i;
    char	*s;

    i = 0;
    s = malloc(strlen(src) + 1);
    if (!s)
	    return (NULL);
    while (src[i])
    {
	s[i] = src[i];
	i++;
    }
    s[i] = '\0';
    return (s);
}

int	main(void)
{
	char	*actual = "Lets see";
	char	*dup;
	
	dup = ft_strdup(actual);
	if(!dup)
		return (1);
	printf("actual : %s\n", actual);
	printf("dup : %s\n", dup);
	free(dup);
	return (0);
}
