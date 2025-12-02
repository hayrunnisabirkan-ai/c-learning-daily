#include <stdio.h>
#include <stdlib.h>      


/* Tek boyutlu sayı dizisi egzersizleri 
Kullanıcıdan n tane sayı alınız ve bunların ortalamasını bulunuz 
Girdiğiniz n değerinin 0 ile 100 arasında olmasına dikkat ediniz */
     
int main() {

int n,i;    
float sayi [100],ortalama,toplam=0.0;

printf("Kac tane sayi gireceksiniz\n");
scanf("%d",&n);

while (n>=100 || n<=0) {

printf("Kac tane sayi gireceksiniz\n");
scanf("%d",&n);  
}

for (i = 0; i<n; i++) {

 printf("%d.sayim:", i+1 );
 scanf("%f", &sayi[i]);    
 toplam = toplam + sayi[i]; 
}

 ortalama = toplam/n;
 printf("Ortalama:%.2f", ortalama);

return 0;

}