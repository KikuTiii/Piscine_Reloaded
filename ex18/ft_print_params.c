#include <unistd.h>

int main (int argc, char **argv)
{
    char *name;

    name = argv[0];
    if(argc >= 1)
    {
        while(*name != '\0')
        {
            write(1, name,1);
            name++;
        }     
        write(1,"\n",1);   
    }
    return(0);
}