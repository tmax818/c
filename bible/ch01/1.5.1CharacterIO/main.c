#include <stdio.h>

/* copy input to output; 1st version
EOF is CTRL-D
 */

main()
{
    int c;

    c = getchar();
    while(c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}