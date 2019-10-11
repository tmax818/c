#include <stdio.h>

int main()
{
    int grid[3][3];
    int row, col;

    // init the array
    for(row = 0; row < 3; row++)
    {
        for(col = 0; col < 3; col++)
        {
            grid[row][col] = 0;
        }
    }

    // display the grig
    for(row = 0; row < 3; row++)
    {
        for(col = 0; col < 3; col++)
        {
            printf("%d ", grid[row][col]);
        }
        putchar('\n');
    }
}