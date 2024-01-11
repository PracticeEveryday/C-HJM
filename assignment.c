#include <stdio.h>

int main () {
  // 4바이트 정수를 담을 수 있는 변수 i를 선언했다.
  int i;

  // 1024 정수형 상수(literal constants) 대입
  i = 1024;
  // 피연산자 연산을 당하는 아이 (i, 1)
  // 연산을 하는 아이 연산자 (=, +)
  i = i + 1;

  const int TWO = 2;      // 수정 불가능한 L-value 여기서의 대입 연산자는 초기화이다.
  int a;                  // L-value: 메모리가 차지하고 있는 특정 데이터 객체(개채)이다
  int b;
  int c;

  a = 42;                   // R-value: 수정 가능한 L-value에 대입될 수 있지만 자기 자신은 L-value가 될 수 없음<- 즉, 데이터를 담을 수 있는 공간이 아님
                            // 42는 임시값 프로그램이 끝나면 사라진다.
  b = a;
  c = TWO * (a + b);
}