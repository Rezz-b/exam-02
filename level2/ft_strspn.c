/*Assignment name	: ft_strspn
Expected files	: ft_strspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the strspn function 
(man strspn).

The function should be prototyped as follows:

size_t	ft_strspn(const char *s, const char *accept);*/
#include <stdlib.h>

size_t  ft_strspn(const char *s, const char *accept)
{
    size_t  i;
    size_t  j;
    size_t  found;

    i = 0;
    while (s[i])
    {
        j = 0;
        found = 0;
        while (accept[j])
        {
            if (s[i] == accept[j])
                found = 1;
            j++;
        }
        if (!found)
            return (i);
        i++;
    }
    return (i);
}
#include <stdio.h>

int main(void)
{
    const char *a = "hello world";
    const char *b =  "hello";

    printf("%zu\n", ft_strspn(a, b));
    return (0);
}