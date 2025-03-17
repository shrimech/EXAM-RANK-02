#include <stdio.h>
char    *ft_strrev(char *str)
{
	int i;
	int j;
	char tmp;


	i = 0;
	j = 0;
	while (str[j])
		j++;
	while (j - 1>i)
	{
		tmp = str[i];
		str[i] = str[j - 1];
		str[j - 1] = tmp;
		i++;
		j--;
	}
	return (str);
}

// int	main(void)
// {
// 	char s[] = "Hello World";
// 	ft_strrev(s);
// 	printf("%s\n", s);
// 	return (0);
// }