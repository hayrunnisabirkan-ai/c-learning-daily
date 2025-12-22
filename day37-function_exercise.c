#include <stdio.h>

void myFunction(char name[], int age) {
  printf("Hello %s. You are %d years old\n", name, age);
}

int main() {
  myFunction("Nisa", 20);
  myFunction("Zeynep", 23);
  return 0;
}