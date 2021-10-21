#include <stdio.h>

void main () {
  FILE *file;
  char str[50];

  file = fopen("input.txt", "r");

  fscanf(file, "%s", str);
  printf("%s", str);
  
  // while((str = fgetc(file)) != EOF) {
  //   printf("%c", str);
  // }

  fclose(file);

  return;
}