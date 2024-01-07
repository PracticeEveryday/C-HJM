#include <stdio.h>
#include <stdint.h>     // 얘를 인클루드 하면 고정 너비 자료형을 사용할 수 있음.
#include <inttypes.h> 

int main () {
  int i;
  int32_t i32;            // 32 bit integer
  int_least8_t i8;        // 적어도 8비트를 갖고 있는 타입이다.
  int_fast8_t f8;         // 8비트 중에 가장 빠른 것
  intmax_t imax;          // sign 정수 중에 가장 큰 것
  uintmax_t uimax;        // unsigned integer 중 가장 큰 것

  i32 = 1004;

  printf("me32 = %d\n", i32);
  printf("me32 = %" "d" "\n", i32);
  // PRId32 <- 매크로를 사용하면 PRI print d(decimal)32
  // 고정 너미 정수 매크로를 사용하면 시스템 마다 동일한 자료형을 사용할 수 있다.
  printf("me32 = %" PRId32 "\n", i32);

  return 0;
}