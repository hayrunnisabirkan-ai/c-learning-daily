#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    O dan 10 a kadar olan tek ve çift sayıları while döngüsü kullanarak bastırınız.
    */

    int i=0;
    while(i<10)
    {
        printf("%d ",i+1);
        i += 2;
    }


    return 0;
}
