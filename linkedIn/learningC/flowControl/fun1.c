#include <stdio.h>

void blorf(void); //this line prototypes the function.

int main()
{
    puts("The main() function always runs first");
    blorf();
    puts("Thanks, blorf()");
}

void blorf(void)
{
    puts("The blorf() function runs when it is called");
}