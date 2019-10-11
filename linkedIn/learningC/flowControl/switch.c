#include <stdio.h>

int main()
{
  char a;

  printf("Your choice (a,b,c): ");
  scanf("%c", &a);

  switch(a)
  {
    case 'A':
    puts("You're stupid!"); break;
    case 'B':
    puts("You're a fucking idiot!"); break;
    case 'C':
    puts("You should kill yourself!"); break;
    default:
    puts("Wow, you're really a fucking moron!");
  }
  return 0;
}
