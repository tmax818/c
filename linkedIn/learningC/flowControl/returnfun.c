#include <stdio.h>

char gimmeAnA(void);

int main()
{
    char grade;
    grade = gimmeAnA();
    printf("On this test you got an %c.\n", grade);

    return 0;
}

char gimmeAnA(void)
{
    return 'A';
}