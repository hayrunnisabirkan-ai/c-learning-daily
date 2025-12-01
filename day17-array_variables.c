#include <stdio.h>
#include <stdlib.h>

int main()
{
    int can[5] = {19, 10, 8, 17, 9};
    int i;

    can[2]=8;
    can[3]=17;

    for(i=0;i<5;i++)
    {
        printf("%d ",can[i]);
    }
    return 0;
}
