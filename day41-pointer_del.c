#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main() {
    /* Kullanıcıdan bir karakter dizisi girmesini isteyin, 
    girdiğiniz karakter dizisinden istediğiniz bir harfin kaldırmasını isteyin,
     karakter kaldırıldıktan sonra dizinin son halini ekrana bastıran c programı yazınız. */

     char dizi[1000];
     char eleme;
     char *can;

    printf("Lutfen bir karakter dizisi giriniz:\n ");
    fgets(dizi,1000,stdin);
    printf("Karakter dizisinden çikarmak istediğiniz karakter nedir:");
    scanf("%c", &eleme);

    for(can=dizi;*can;can++)
    {
        if(*can == eleme)
        {
            strcpy(can,can+1);
        }

     printf("Eleme yapildiktan sonra karakter dizisinin son halinin giriniz: ");


    }
    return 0;
    } 
