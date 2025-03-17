#include <unistd.h>

int finded(char *s,char a)
{
    int i=0;
    while(s[i])
    {
        if(s[i] == a)
            return(0);
        i++;
    }
    return(1);
}

int main(int ac, char **av)
{
    int i = 0;
    int j;
    int z = 0;
    char *s;

    if (ac == 3)
    {
        while(av[1][i])
        {
            j = 0;
            while(av[2][j])
            {
                if (av[1][i] == av[2][j] && finded(s,av[1][i]))
                {
                    s[z] =av[1][i];
                    write(1,&s[z],1);
                    z++;
                }
                j++;
            }
            i++;
        }
    }
    write(1,"\n",1);
}