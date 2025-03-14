// my code

#include <unistd.h>

int main(int ac ,char **av)
{
    if (ac ==2 )
    {
        int i = 0;
        char j;

        while (av[1][i])
        {
            if (av[1][i] >= 'A' && av[1][i] <= 'Z')
            {
                j = av[1][i];
                while (j - 65 + 1)
                {
                    write(1, &av[1][i] ,1);
                    j--;
                }
            }
            else if (av[1][i] >= 'a' && av[1][i] <= 'z')
            {
                j = av[1][i];
                while (j - 97  + 1)
                {
                    write(1, &av[1][i] ,1);
                    j--;
                }
            }
            else 
                write(1,&av[1][i],1);
            i++;
        }
    }
    write(1,"\n",1);
}

// net_code

// #include <unistd.h>

// int main(int ac, char *av[])
// {
//     int i;
//     int j;
    
//     if (ac == 2)
//     {
//         i = 0;
//         while (av[1][i])
//         {
//             if (av[1][i] >= 65 && av[1][i] <= 90)
//             {
//                 j = 0;
//                 while (j < av[1][i] - 64)
//                 {
//                     write(1, &av[1][i], 1);
//                     j++;
//                 }
//             }
//             else if (av[1][i] >= 97 && av[1][i] <= 122)
//             {
//                 j = 0;
//                 while (j < av[1][i] - 96)
//                 {
//                     write(1, &av[1][i], 1);
//                     j++;
//                 }
//             }
//             else
//                 write(1, &av[1][i], 1);
//             i++;
//         }
//     }
//     write(1, "\n", 1);
// }