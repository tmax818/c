#include <stdio.h>

int main()
{
    float price, *ptr; //declare the pointer ptr

    ptr = &price;   //initialize the pointer ptr
    *ptr = 99.99;

    printf("The price is $%.2f with the variable.\n", price);
    printf("The price is $%.2f with the *ptr.\n", *ptr);
    printf("The address using &price is %p.\n", &price);
    printf("The address using ptr is %p.\n", ptr);
}