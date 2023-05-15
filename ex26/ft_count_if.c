#include <stdio.h>
#include <unistd.h>

int ft_count_if(char **tab, int (*f)(char *))
{
    int returns;
    int count;

    count = 0;
    returns = 0;
    while (tab[count] != 0)
    {
        if (f(tab[count]) == 1)
            returns++;
        count++;
    }
    return (returns);
}

int ft_strcmp(char *s1, char *s2)
{
    unsigned int i;

    i = 0;
    while (s1[i] != '\0' || s2[i] != '\0')
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);
}

int is_nium(char *str)
{
    return ft_strcmp(str, "nium") == 0;
}

int is_kikuti(char *str)
{
    return ft_strcmp(str, "kikuti") == 0;
}

int main(void)
{
    char *tab[] = {
        "nium",
        "kikuti",
        "nium",
        "nium",
        "kikuti",
        0};

    int total_of_niums = ft_count_if(tab, &is_nium);
    int total_of_kikuti = ft_count_if(tab, &is_kikuti);

    printf("%d\n", total_of_niums);  // 3
    printf("%d\n", total_of_kikuti); // 2
}
