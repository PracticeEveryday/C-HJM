#include <stdio.h>

int main () {
  int count = 0;
  while (count++ < 10)
  //5. while (++count < 10) // 1 2 3 4 5 6 7 8 9
  //6. while (count++ < 10) //1 2 3 4 5 6 7 8 9 10 <- 비교가 끝나고 더한다.
  // 증가 되지 않은 상태에서 비교하고 while문을 돌고 더한다!!
  {
    printf("%d\n", count);
    //printf("%d\n", count++);
    //printf("%d\n", ++count);
    // 1. count = count + 1
    // 2. count += 1
    // 3. count++
    // 4. ++count
  }

  // Promotions in assignments
  short s = 64;
  int i = 5;

  float f = 3.14f;
  double d = f;

  // demotion in assignments <- 강등!
  d = 1.25;
  // 1.25는 정밀하게 표현이 가능하다 그렇기에 float에 넣어도 문제가 되지 않는다.
  f = 1.25;
  printf("%f\n", f);
  // 1.123은 정밀하게 남지 않고 무한 소수를 가지게 된다. 그렇기에 문제가 된다
  f = 1.123;
  printf("%f\n", f);

  // ranking of types in operations
  // long double > double > float <- 실수가 정수보다 랭킹이 높다!
  // unsigned long, double, float <- 메모리가 클 때 랭킹이 높다!
  // unsigned long, long
  // unsigned int, int
  // short int, unsigned short int
  // signed char, char, unsigned char
  // _Bool
  // Ref: Google : Integer conversion rank;

  d = f + 1.234; // float + double -> float를 double로 암묵적 형변환
  // CPU는 다른 자료형을 연산 할 수 없다!

  f = f + 1.234; // double을 float로 넣으려고 하기에 warning이 뜬다



  return 0;
}