#include <stdio.h>

int main(void) {
  int i = 0, j = 0;
  int sum = 0;

  printf("Input Two Integers\n");

  // i와 j의 주소를 넘겨준다! scanf에게!
  scanf("%d%d", &i, &j);

  sum = i + j;

  // 출력 형식 지정자와 입력 변수 개수가 같아야 한다!
  printf("%d plus %d = %d\n", i, j, sum);

  return 0;
}


int main() {
  float won = 0.0f;
  float dollar = 0.0f;

  printf("Input won\n");
  scanf("%f", &won);

  // 0.00076f <- float형 literal consts가 된다!
  dollar = won * 0.00076f;
  printf("Dollar = %f\n", dollar);

  return 0;
}