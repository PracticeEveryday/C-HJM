#include <stdio.h>
#include <stdbool.h> // 표준에 bool타입을 선언할 수 있게 추가됨!

int main () {
  // 자료혀이 가질 수 있는 가장 작은 사이즈는 1Byte 이기에
  // 0과 1만 쓰면 1bit면 되지 않나 싶지만 1Byte를 배정받는다.
  // 주소를 써야 되기 떄문이다 :)
  printf("%lu\n", sizeof(_Bool));

  // 내부적으로는 정수이기 떄문에 0과 1만 가지면 됨
  _Bool b1;
  b1 = 0;   // flase
  b1 = 1;   // true

  printf("%d\n", b1);

  bool b2, b3;
  b2 = true;
  b3 = false;

  // 컴퓨터가 true flase 판별 할 때 flase가 아니면 true다 이렇게 판별한다!
  // 나중에 더 학습할 예정이다.
  printf("%d %d\n", b2, b3);

  return 0;
}