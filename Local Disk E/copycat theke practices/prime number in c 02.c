#include <stdio.h>

int main() {

  int N , i, flag = 0;
  scanf("%d", &N); //9

  if (N == 0 || N == 1)
    flag = 1;

  for (i = 2; i <= N / 2; ++i) {//

    if (N% i == 0) {
      flag = 1;
      break;
    }
  }

  if (flag == 0)
    printf("Yes");
  else
    printf("No");

  return 0;
}
