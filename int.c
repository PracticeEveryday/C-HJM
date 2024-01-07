#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main () {
  unsigned int i = 0;
  unsigned int u_max = UINT_MAX;
  unsigned int u_min = 0;
  signed int i_max = INT_MAX;
  signed int i_min = INT_MIN;

  // 메모리 사이즈를 알려준다.
  // unsigned로 출력 해야 한다.
  printf("%lu\n", sizeof(unsigned int));
  printf("%lu\n", sizeof(signed int));
  printf("%lu\n", sizeof(i));

  // 0b 뒤에 오는 리터럴이 2진수라는 걸 말해준다.
  i = 0b11111111111111111111111111111111;
  printf("%u\n", i);

  // -1이 나온다! signed int와 unsigned int의 범위가 다르다
  // 인티저의 범위가 넘어가면 -1이 출력된다.
  // 허용되는 범위 내의 값이 들어오면 정상적으로 출력된다.
  printf("%d\n", i);


  printf("max of unsigned int %u\n", u_max);
  printf("min of unsigned int %u\n", u_min);
  printf("max of signed int %d\n", i_max);
  printf("min of signed int %d\n", i_min);

  // overflow
  unsigned int u_overflow = UINT_MAX + 1;
  unsigned int i_overflow = INT_MAX + 1;
  printf("overflow of unsigned int %u\n", u_overflow); // 0
  printf("overflow of signed int %d\n", i_overflow); // 가장 작은 수

  unsigned int u_min_minus_one = 0 - 1;
  printf("가장 작은값 - 1 %u\n", u_min_minus_one); // 가장 큰수가 되어버림

  return 0;
}