#include <stdio.h>

int main() {
  printf("Integer Division\n");
  // 정수 끼리 나눌 때 소수점 자리수를 담을 공간이 없기 때문에 무조건 버린다!
  printf("%d\n", 14 / 7);   // 2
  printf("%d\n", 7 / 2);   // 3 정수 연산 시 소수점은 버린다! 절삭을 한다! 반올림X
  printf("%d\n", 7 / 3);  // 2
  printf("%d\n", 7 / 4);  // 1
  printf("%d\n", 8 / 4);  // 2

  // 이전에는 -3, -4 등등 이상하게 나왔다!!
  // C99 표준 이후에는 정립되었다
  // 전부 짤라 버리는 것으로!
  printf("Truncating toward zero(C99)\n");
  printf("%d\n", -7 / 2); // -3.5 <- 0.5 버림! 3
  printf("%d\n", -7 / 3);
  printf("%d\n", -7 / 4);
  printf("%d\n", -8 / 4);


  printf("Floating divisions\n");
  printf("%f\n", 9.0 / 4.0);
  // CPU는 서로 다른 자료형을 나눌 수 없다.
  // 4를 double로 바꾸어 자료형을 맞추어서 CPU가 계산 하도록 한다.
  // 이 후 자료형이 다른 숫자를 계산할 때는 형변환을 통해 자료형을 맞추고 계산할 수 있또록 하자
  printf("%f\n", 9.0 / 4); 

  return 0;
}