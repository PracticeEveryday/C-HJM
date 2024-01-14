#include <stdio.h>

// for loop는 유연하다!

int main() {
  /**
   * 가산 루프
   * 1. Counter Initilazation <- 최초 실행
   * 2. Counter Check
   * 3. Counter Update <<- 이 세가지가 하나의 괄호 안에 들어간다.
   * for(initialize; condition test; update)
   *  statement
  */

  for(int i = 10; i > 0; i--) {
    printf("%d\n", i);
  }

  // 더 다양하게 조건을 넣어줄 수 있다.
  for(int i = 0; i < 100; i = i + 20) {
    printf("%d\n", i);
  }

  for(char c = 'A'; c <= 'Z'; c++) {
    printf("%c\n", c);
  }

  // 함수를 넣을 수도 있다!!
  // 조건문에!
  for(int i = 0; i * i < 10; i++) {
    printf("%d\n", i);
  }

  // 서로 다른 자료형은 안되고, comma operator만 넣을 수 있다!!
  for(int x = 1, y = 5; y <= 20; y = (++x * 3) + 10)
  {
    printf("%d\n", x);
  }

  // 무한 루프 while(1)과 동일함!!
  // for문과 while문은 호환 가능하다!!!
  for(;;) {
    printf("I love you!")
  }


  // 7이 아닐 때까지 계속 받을 수도 있다
  // 이렇게 사용 할 수도 있다는 거지!!! 가독성이 떨어지는 이런 거는 안 쓰는 게 좋다
  // 코드를 복잡하게 짜지 말자!
  int input;
  for(printf("Let's go\n"); input != 7; scanf("%d", &input))
    ;

  return 0;
}