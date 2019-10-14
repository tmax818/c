#include <stdio.h>

int main()
{
    enum gender {male, female};

    enum gender myGender;

    myGender = male;

    printf("%d\n", myGender);
}