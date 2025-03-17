#include <limits.h>

int		max(int* tab, unsigned int len)
{
    int i = INT_MIN;
    int j = 0;

    while (tab[j])
    {
        if (tab[j] > i)
            i = tab[j];
        j++;
    }
    return(i);
}
// #include <stdio.h>

// int main()
// {
// 	int int_tab[] = {1, 3, 15, 10, 9};
// 	printf("%d", max(int_tab, 5));
// }