#include <stdio.h>

int main() {
  char str1[20] = "Hello World!";
  char str2[20];

  strcpy(str2, str1);

  printf("%s", str2);

  return 0;
}