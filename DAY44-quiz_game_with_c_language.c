#include <stdio.h>
#include <ctype.h>

int main() {
    char sorular[][100] = {"1. C dili hangi yil cikmistir?: ",
    "2. C dilinin kurucusu kimdir?: ",
    "3. Hangisi bir kodlama dili degildir?: "};

    char secenekler[][100] = {"A. 1969", "B. 1972", "C. 2008", "D. 2005",
    "A. James Gosling", "B. Tim Berners-Lee", "C. Dennis Ritchie", "D. Guido van Rossum",
    "A. Python", "B. Java", "C. C", "D. C--"};

    char cevaplar[] = {'B', 'C', 'D'};
    int Sorusayisi = sizeof(sorular)/sizeof(sorular[0]);
    
    char tahmin;
    int puan;
     
    printf("Quiz oyunu\n");

    for(int i=0; i<Sorusayisi; i++){
    printf("------------------------\n");
    printf("%s\n", sorular[i]);
    printf("------------------------\n");

    for(int j=(i*4); j<(i*4)+4; j++) {
        printf("%s\n", secenekler[j]);
    }

    printf("Cevap giriniz: ");
    scanf("%c", &tahmin);
    scanf("%c");

    tahmin = toupper(tahmin);

    if(tahmin == cevaplar[i]) {
        printf("Dogru bildin!");
        puan++;
    }
    else {
        printf("Yanlis!");
    }

}

printf("**************************");
printf("Toplam puanin= %d/%d",puan, Sorusayisi);
printf("**************************");

return 0;

}