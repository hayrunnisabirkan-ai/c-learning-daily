#include <stdio.h>
#include <string.h>

//Girilen string ifadenin boyutunu hesaplayınız.

int main() {
    

  /*  char message[100]="Merhaba";
    printf("%s degerinin boyu %d",message,strlen(message)); */

   char message[100];
   printf("String bir ifade giriniz\n");
  // scanf("%s", &message);
   fgets (message,100,stdin);

   printf("String ifademizin boyu: %d",strlen(message));

   return 0; 

}