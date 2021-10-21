#include <stdio.h>

int main () {
  FILE *file;
  char str[10];

  scanf("%s", str);

  file = fopen("output.txt", "w+");
  fprintf(file, str);

  fclose(file);
}