#include <string.h>
size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
    size_t j;
    int c;

    while (s[i])
    {
        j = 0;
        c = 0;
        while(accept[j])
        {
            if (s[i] == accept[j])
                c = 1;
            j++;
        }
        if (c == 0)
            return(i); 
        i++;
    }
    return(i);
}
// #include <stdio.h>
// int main()
// {
// 	char s[50] = "192ellff5454o";
// 	const char accept[150] = "103998945";
//     size_t i =ft_strspn(s, accept);
//     size_t j = strspn(s, accept);
// 	printf("%d----%d\n", i,j);

// }