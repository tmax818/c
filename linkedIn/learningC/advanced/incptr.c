#include <stdio.h>

int main()
{
    int array[] = {11, 14, 72, 42};
    int *aptr;

    aptr = array;

    printf("The element is %d\n", *aptr);
    printf("The address is %p\n", aptr);

    return 0;
}