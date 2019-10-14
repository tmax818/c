#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    if(argc == 1)
    {
        puts("you only have one argument");
    } else if(argc > 1 && argc < 4)
    {
        puts("here are your arguments: ");

        for(i = 0; i < argc; i++)
        {
            printf(" %s \t", argv[i]);
        }
        putchar('\n');
    } else
    {
        puts("you have too many args");
    }
    return 0;
}