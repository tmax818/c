#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("This is argc: %d and this is argv: %s and mem loc: %p %s\n", argc, *argv, argv, *argv+1);
}