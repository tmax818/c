#include <stdio.h>

int main()
{
    char a;
    short b;
    int c;
    long d;
    float e;
    double f;

    printf("size for a %s is %lu byte(s) of storage.\n", "char", sizeof(a));
    printf("size for a %s is %lu byte(s) of storage.\n", "short", sizeof(b));
    printf("size for a %s is %lu byte(s) of storage.\n", "int", sizeof(c));
    printf("size for a %s is %lu byte(s) of storage.\n", "long", sizeof(d));
    printf("size for a %s is %lu byte(s) of storage.\n", "float", sizeof(e));
    printf("size for a %s is %lu byte(s) of storage.\n", "double", sizeof(f));
}