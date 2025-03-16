#include <stdio.h>
#include <stdlib.h>

int main(int ac ,char **av)
{
    int a;
    int b;
    int c;
    if (ac == 4)
    {
        a = atoi(av[1]);
        b = atoi(av[3]);

        switch (av[2][0])
        {
            case '/':
                c = a / b;
                break;
            case '+':
                c = a + b;
                break;
            case '-':
                c = a - b;
                break;
            case '%':
                c = a % b;
                break;
            case '*':
                c = a * b;
                break;
        }
        printf("%d",c);
    }
    printf("\n");
}