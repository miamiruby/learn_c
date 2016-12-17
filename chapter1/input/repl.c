#include <stdio.h>

/* copy input to output; 1st version */
int main()
{
  int c;
  while(1){
    printf("\n$ ");
    while(c != EOF){
      c = getchar();
      printf("%c \n",c);
      printf("\n$ ");
    }
  }
  return(0);
}
