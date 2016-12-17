#include <stdio.h>

/* count characters in input; 1st version */
int main()
{
  long nc;
  int c;
  nc = 1;
  while(getchar() != EOF){
    printf("%ld\n",nc);
    ++nc;
  }
  printf("%ld\n",nc);
  return(0);
}
