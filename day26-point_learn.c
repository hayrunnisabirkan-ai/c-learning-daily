#include <stdio.h>
#include <stdlib.h>

int main() 
{

  int t[10];
  int i;

  for(i=0; i<10; i++) {

     t[i]=0;  
  }

  for(i=0; i<10; i++) {

    printf("%d\n", t[i]);  
  }


    return 0;
}