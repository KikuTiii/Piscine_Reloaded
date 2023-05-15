#include <stdio.h>

int ft_sqrt(int nb)
{
    int x;

    x = 0;
    while((x * x) < nb)
    {
        x++;
    }
    if ((x * x) == nb)
    {
        return(x);
    }
    
}