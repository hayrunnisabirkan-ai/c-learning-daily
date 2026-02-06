#include <stdio.h>
int main() {

    FILE *dosya = fopen("C:\\Users\\PC\\OneDrive\\Desktop\\visualstudio\\.vscode\\taylor.txt", "r");
    char buffer[300];

    while(fgets(buffer, 300, dosya) !=NULL) {
    printf("%s", buffer);
}
    fclose(dosya);

    return 0;
} 