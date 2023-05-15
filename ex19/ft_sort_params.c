#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
    		return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*a;

	i = 1;
    while (i < argc - 1)
    {
        if (ft_strcmp(argv[i],argv[ i + 1]) > 0)
        {
            a = argv[i];
            argv[i] = argv[i + 1];
            argv[i + 1] = a;
            i = 0;
        }
       i++;
    }
    i = 1;
   while(i < argc)
   {
    ft_putstr(argv[i]);
    ft_putchar('\n');
    i++;
   }
   return(0);
}