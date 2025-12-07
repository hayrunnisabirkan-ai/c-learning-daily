#include <stdio.h> 
int main() { 
/* Kullanıcıdan haftanın kaçıncı günü olduğunun bilgisni alınız */
int gun; 

printf("Günün, haftanin kacinci günü oldugunu giriniz (1-7:) ");
scanf("%d", &gun);

switch(gun)
 {
    case 1:
    case 2:
    case 3:
    case 4: 
    case 5:
        printf("Hafta içi");
        break;
    case 6:
    case 7:   
        printf("Hafta sonu");
        break;
    default:
       printf("Geçersiz değer! Lütfen 1 ile 7 arasinda bir sayi giriniz. ");
       
 }

return 0;
     
 }