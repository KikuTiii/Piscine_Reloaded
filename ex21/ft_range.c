#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
    int count;
    int *numbers;
    int dest;

        if(min >= max)
    return(0);
    if (numbers == 0)
        return(0);

    numbers = malloc((max - min) * sizeof(int));
    count = 0;
    dest = max - min;
    while(count < dest)
    {   
        numbers[count] = min;
        min++;
        count++;
    }
    return(numbers);
}

// int	main()
// {
//     int *arr;
//     int count2;

//     count2 = 0;
//     arr = ft_range(1, 10);
//     while (count2 < 9)
//     {
//         printf("%d", arr[count2]);
//         count2++;
//     }
    
// }
