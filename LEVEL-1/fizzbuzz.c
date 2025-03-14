//my code 

#include <unistd.h>
void pc(char c)
{
    write(1, &c ,1);
}
void pn(int nb)
{
    if (nb <= 9)
        pc(nb + '0');
    if (nb > 9 )
    {
        pn(nb /10 );
        pc(nb %10 +'0');
    }
}

int main()
{
    int i = 1;

    while (i <= 100)
    {
        if (i%3 == 0 && i%5 == 0)
            write(1,"fizzbuzz",8);
        else if (i % 3 == 0)
            write(1,"fizz",4);
        else if (i%5 == 0)
            write(1,"buzz",4);
        else
            pn(i);
        i++;
        write(1, "\n",1);

    }
}