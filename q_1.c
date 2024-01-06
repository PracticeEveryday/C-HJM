// 전처리기 Preprocessor Instruction
// 컴파일 하기 전에 처리한다.

#include <stdio.h>

int main(void) { // 함수 정의 시작 <- Scope 영역 시작
  // 문장 시작
  int a; // 변수 선언(어떤 공간)
  int b;
  int c;

  a = 1; // 변수 값 대입(공간에 값을 대입)
  b = 2;
  c = a + b; // 변수에 연산 결과 대입

  printf("Result is %i", c); // 함수 호출(call or invoke)

  return 0; // 결과 값을 반환
  // 메인 함수의 출력은 운영체제가 받아간다! <- 특별한 함수이다.
  // 영역의 끝
};