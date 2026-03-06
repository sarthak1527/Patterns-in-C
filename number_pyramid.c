#include <stdio.h>

 
int main()
{
  int i,j,k;

  for(int i=1; i<=5; i++){

    for(int j=1; j<=5-i; j++){
      printf(" ");
    }

    for(int k=1; k<2*i; k++){
      printf("%d",i);
    }

    printf("\n");
  }

  return 0;
}
