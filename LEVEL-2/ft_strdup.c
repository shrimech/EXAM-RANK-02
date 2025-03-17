#include <stdlib.h>

int ft_strlen(char *s)
{
    int i =0;
    while (s[i])
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    char *dup= malloc(ft_strlen(src));
    int i = 0;

    while (src[i])
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return(dup);
}

// #include <stdio.h>

// int main()
// {
// 	char	*a;
// 	a = "Hello World";
// 	printf("%s\n", ft_strdup(a));
// }