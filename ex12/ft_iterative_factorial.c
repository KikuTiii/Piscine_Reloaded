#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int c;

    c = nb;
    if (nb < 0)
    return(0);
    if (nb <= 1)
    return(1);
    while(c > 1)
    {
        nb = nb * (c - 1);
        c --;
    }
    return(nb);
}

// int    main(void)
// {
//     printf("expected: 0,         result: %d\n", ft_iterative_factorial(-1));
//     printf("expected: 1,         result: %d\n", ft_iterative_factorial(0));
//     printf("expected: 1,         result: %d\n", ft_iterative_factorial(1));
//     printf("expected: 2,         result: %d\n", ft_iterative_factorial(2));
//     printf("expected: 6,         result: %d\n", ft_iterative_factorial(3));
//     printf("expected: 24,        result: %d\n", ft_iterative_factorial(4));
//     printf("expected: 120,       result: %d\n", ft_iterative_factorial(5));
//     printf("expected: 720,       result: %d\n", ft_iterative_factorial(6));
//     printf("expected: 5040,      result: %d\n", ft_iterative_factorial(7));
//     printf("expected: 40320,     result: %d\n", ft_iterative_factorial(8));
//     printf("expected: 362880,    result: %d\n", ft_iterative_factorial(9));
//     printf("expected: 3628800,   result: %d\n", ft_iterative_factorial(10));
//     printf("expected: 39916800,  result: %d\n", ft_iterative_factorial(11));
//     printf("expected: 479001600, result: %d\n", ft_iterative_factorial(12));
//     return (0);
// }