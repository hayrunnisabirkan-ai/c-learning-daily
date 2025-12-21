#include <stdio.h>
#include <stdlib.h> 

// Negatif Sayi Girilinceye Kadar Çalişan Programi Fonksiyon Yardimiyla Bulmak

void sayiiste()
{
    int sayi;
    while(1)
    {
        printf("Lutfen bir sayi giriniz\n");
        scanf("%d", &sayi);
        if(sayi<0)
        {
            break;
        }
    }
}
int main()
{
    sayiiste();
    return 0;
}   