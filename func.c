#include <stdio.h>

// 함수의 프로토 타이핑 먼저 해놓는다. <- 입, 출력이 어떤 타입이다를 먼저 선언하는 것
// function declaration <- 선언한다!
// 링킹하는 과정에서 구현부를 연결해준다.
void say_hello (void);

// 1.OS 가 프로그램을 실행하기 위해 main을 찾아 실행시킨다.
int main () {
  // 함수가 함수를 호출(call)하는 구조에 익숙해지자!
  say_hello();
  say_hello();
  say_hello();
  say_hello();

  return 0;
}

// 함수를 사용하기 전에 변수나 함수가 선언되어 있어야 한다.
// function definition
void say_hello (void) {
  printf("Hello, World!\n");
}