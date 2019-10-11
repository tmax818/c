#include <stdio.h>

int main(){

  int a;

  printf("Type an integer: ");
  scanf("%d", &a);
  if(a > 10)
  {
    printf("%d is greater than 10.\n", a);
  }
  else
    puts("You're a bitch!");


  return(0);
}
