#include <stdio.h>
#include <float.h>

int main () {
  printf("%lu\n", sizeof(float));
  printf("%lu\n", sizeof(double));
  printf("%lu\n", sizeof(long double));

  // 리터럴을 f를 붙여주는 것이 좋다 :)
  float f = 123.456f;

  // 리터럴 입장에선 double을 기본으로 보는 것인가
  double d = 123.456;

  float f2 = 123.456;
  // float가 double 보다 작으므로 에러가 뜨지 않는다.
  double d2 = 123.456f;

  int i = 3;
  float f3 = 3.f; // 3.0f
  double d3 = 3.; // 3.0

  float f4 = 1.234e10f; // 1.234 * 10^10 <- 과학적 표기법 사용 가능 e, E 같음

  float f5 = 0x1.1p1; //0x 16진수 + e대신에 p를 적은 것임.
  double d5 = 1.0625e0; 

  // %e 는 scientific notation으로 나옴 E~~
  printf("%f %F %e %E\n", f, f, f, f);
  printf("%f %F %e %E\n", d, d, d, d);

  // 16진수로 출력하는 것임
  printf("%a %A\n", f5, f5);
  printf("%a %A\n", d5, d5);


  return 0;
}