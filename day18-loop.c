#include <stdio.h>
int main()
{

char isim[] = "RIZE";
int i = 0;
while (isim[i] != '\0') {
    if (isim[i] == 'Z') {
        printf("*");
        break;
    }
    printf("%c", isim[i]);
    i++;
}
printf("\nC: %s\n", isim);

return 0;
} 

