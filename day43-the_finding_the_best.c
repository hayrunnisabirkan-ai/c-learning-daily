#include <stdio.h>

// En büyüğü bulan fonksiyon
int enBuyuguBul(int sayilar[], int boyut) {
    int eb = sayilar[0]; // İlk sayıyı en büyük varsayalım
    for(i=0; i<boyut; i++) {
        if (sayilar[0] > eb) {
            eb = sayilar[i];
        }
    }
    return eb;  // Sonucu geri döndürür
}

int main() {
    int dizi[5];
    printf("5 adet sayi giriniz:\n"); 

    for(int i=0; i<5; i++) {
    scanf("%d", &dizi[i]);
    }
    
    int sonuc = enBuyuguBul(dizi, 5);
    printf("Girdiğiniz en buyuk sayi %d\n", sonuc);

    return 0;
}