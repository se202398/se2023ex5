#include <stdio.h>

int main(void) {
  int i;
  char str[] = "hello";
  for (i = 0; str[i] != '\0'; i++)
    ;
  printf("%s %d", str, i);
  return 0;
}