#include <stdio.h>
 // 1'den 10'a kadar olan tüm sayıları toplamak için özyinelemeyi kullanalım
 
int sum(int k);

int main() {
    int result = sum(10);
    printf("%d", result);
    return 0;
}

int sum(int k) {
    if (k > 0) {
        return k + sum(k - 1);
    } else {
        return 0;
    }
    }
