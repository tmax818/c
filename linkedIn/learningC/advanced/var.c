#include <stdio.h>

int main()
{
    int a;

    printf("The value of a is %d\n", a);
    printf("An int variable occupies %lu bytes of storage\n", sizeof(a));
    // lu is long unsigned...

    return 0;
}