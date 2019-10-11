#include <stdio.h>

#define MAX 16

int main()
{
    const int x = 5;

    printf("%d squared is %d\n", x, x*x);
    //x = 10;
    printf("%d squared is %d\n", MAX, MAX*MAX);
    return 0;
}