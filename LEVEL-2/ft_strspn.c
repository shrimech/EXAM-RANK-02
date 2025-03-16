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
        while(s[i] == accept[j])
        {
            j++;
        }
    }
}