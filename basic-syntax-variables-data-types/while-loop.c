#include <stdio.h>

int main() {
  int myAge = 23;
  int *ptr = &myAge;

  printf("%d\n", myAge);

  printf("%p\n", &myAge);

  printf("%p\n", ptr);

  return 0;
}