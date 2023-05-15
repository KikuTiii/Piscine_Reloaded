#include <unistd.h>
#include <stdio.h>

void ft_foreach(int *tab, int length, void (*f)(int))
{
    int i;

    i = 0;
    while (i < length)
        f(tab[i++]);
}

void ft_putnbr(int nb)
{
    char unit;

    if (nb < 0)
    {
        write(1, "-", 1);
        unit = (nb % 10) * -1 + '0';
    }
    else
        unit = (nb % 10) + '0';
    nb /= 10;
    if (nb < 1)
        nb *= -1;
    if (nb != 0)
        ft_putnbr(nb);
    write(1, &unit, 1);
}
    
int main()
{
    int tab[] = {1, 2, 3, 4, 5};
    int length = 5;

    ft_foreach(tab, length, &ft_putnbr);

    return (0);
}