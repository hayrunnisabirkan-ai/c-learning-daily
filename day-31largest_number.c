#include <stdio.h>
int main() {

    double n1, n2, n3;

    printf("Enter the three different numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    // if n1 is grater than both n2 and n3, n1 is the largest
    if(n1 >= n2 && n1 >= n3)
    printf("%.2f is the largest number.", n1);

    // burada else if de kullanabilirdik
    if(n2 >= n1 && n2 >= n3)
    printf("%.2f is the largest number.", n2);

    // burada else de kullanabilirdik
    if(n3 >= n1 && n3 >= n2)
    printf("%.2f is the largest number.", n3);

    return 0;
}