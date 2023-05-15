#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int swap;

    swap = *a;
    *a = *b;
    *b = swap;
}

// int main(void)
// {
//     int a;
//     int b;

//     a = 10;
//     b = 12;
//     ft_swap(&a, &b);
//     printf("a = 10 = %d, \n", a);
//     printf("b = 12 = %d, \n", b);
// }