#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return(i);
}

char *ft_strdup(char *src)
{
    int i;
    char * dest;

    dest = malloc(ft_strlen(src) + 1);
    i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}

// int main(void)
// {
//     char src[] = "GeeksForGeeks";

//     char* target = ft_strdup(src);
//     char* target1 = strdup(src);

//     printf("%s\n", target);
//     printf("%s\n", target1);
//     return 0;
// }