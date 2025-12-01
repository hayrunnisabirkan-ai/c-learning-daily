#include <stdio.h>

int main() {
//Kullanıcıdan 2 adet sayı alınız büyüklük küçüklük durumuna göre // ekrana bastırma işlemi yapınız.

int sayi1,sayi2;
printf("Lutfen 2 sayi giriniz\n");
scanf("%d%d" , &sayi1,&sayi2);

if (sayi1 == sayi2)   
{
printf("Sonuc : %d = %d", sayi1, sayi2);
}

else if(sayi1 > sayi2)
{
 printf("Sonuc : %d > %d", sayi1,sayi2);

}

else
{
printf("Sonuc : %d < %d", sayi1,sayi2);
     
}

return 0;

} 