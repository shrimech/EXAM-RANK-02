int	ft_atoi(const char *str)
{
    int i = 0;
    int s = 1;
    int n = 0;

    while(str[i] <= 32)
        i++;
    if (str[i] == '-')
    {
        s = -1;
        i++;
    }
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            n = n * 10 + str[i] - '0';
        else
            break;
        i++;
    }
    return(s*n);
}