#include <stdio.h>

int main()
{
    int a, b;
    int *ptr;       // you must use * when declaring a pointer!!

    a = 1234;
    ptr = &a;
    b = *ptr;

    printf("a is %d and b is %d\n", a, b);
    printf("a is %d and b is %d\n", a, *ptr);
}