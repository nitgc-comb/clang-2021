#include <stdio.h>

int main (void) {
  int input[5];
  int answer[3] = {0, 0, 0};

  for (int i = 0; i < 5; i++) {
    // 入力
    scanf("%d", &input[i]);
  }

  for (int j = 0; j < 5; j++) {
    if (input[j] > answer[0]) {
      answer[2] = answer[1];
      answer[1] = answer[0];
      answer[0] = input[j];
    } else if (input[j] > answer[1]) {
      answer[2] = answer[1];
      answer[1] = input[j];
    } else if (input[j] > answer[2]) {
      answer[2] = input[j];
    }
  }

  for (int k = 0; k < 3; k++) {
    printf("%d\n", answer[k]);
  }

  return 0;
}