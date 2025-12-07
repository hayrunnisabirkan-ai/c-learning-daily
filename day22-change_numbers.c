#include <stdio.h>
 /* A ve B değişkenlerine iki tam sayıyı girdi olarak alan ve yerini değiştiren bir c programı 
 yazınız */
 
 int main() {
 
 int a,b,geçici;
 printf("A sayisini giriniz\n");
 scanf("%d", &a);
 printf("B sayisini giriniz\n");
 scanf("%d", &b);
 
 printf("Yer değiştirmeden önce\n");
 printf("A sayisini %d\n", a);
 printf("B sayisini %d\n",b);
 
 geçici = a;
 a=b;
 b=geçici;
 
 printf("Yer değiştirmeden sonra\n");
 printf("A sayisini %d\n",a);
 printf("B sayisini %d\n",b);
 
 return 0;
}