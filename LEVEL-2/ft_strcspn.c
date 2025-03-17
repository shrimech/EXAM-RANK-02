#include <stdio.h>
#include <string.h>
size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t i = 0;
    size_t j;

    while(s[i])
    {
        j = 0;  
        while (reject[j])
        {
            if (s[i] == reject[j])
                return(i);
            j++;
        }
        i++;
    }
    return(i);
}

// int main()
// {
// 	char s[50] = "1abcd123sajda";
// 	const char accept[150] = "123";
//     size_t i =ft_strcspn(s, accept);
//     size_t j = strcspn(s, accept);
// 	printf("%d----%d\n",i, j);

// }