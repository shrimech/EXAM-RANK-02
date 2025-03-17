#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	int j;
	//char *s;

	while (*s1)
	{
		//s = &s1[i];
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				return ((char *)s1);
			j++;
		}
		s1++;
	}
	return(NULL);
}

// int main()
// {
// 	char s[50] = "192ll9fa5454o";
// 	const char accept[150] = "ae";
//     char *i =ft_strpbrk(s, accept);
//     char *j = strpbrk(s, accept);
// 	printf("%s----%s\n",i, j);

// }