#include <stdio.h>
#include <string.h>

int main()
{
    char first[] = "I would like to go ";
    char second[] = "from here to there\n";
    char buffer[50];
    int len;

    strcpy(buffer, first);
    strcat(buffer, second);
    len = strlen(buffer);
    puts(buffer);
    printf("The buffer length is %d\n", len);

    return 0;
}