#include <stdio.h>

int main () {
  printf("%d\n", 1 + 2);

  int income, salary, bonus;

  income = salary = bonus = 100; // triple assignment 결과 적으로 모두 100이된다.
  // income = (salary = (bonus = 100)) 연쇄적인 대입

  salary = 100;
  bonus = 30;

  income = salary + bonus; // 전부 L-value이다. 하지만 더한 값 자체는 150는 R-value이다!

  int takehome, tax;
  tax = 20;
  takehome = income - tax;

  int a, b;
  a = -7; // 부호 연산자 숫자 앞에 -를 붙이면 마이너스 오퍼레이터이다! -7 리터럴이 아니라 7 => 부호 바꾸는 오퍼레이터(-) -> -7
  b = -a;
  b = +a; // 아무일도 일어나지 않는다. 하지만 꼭 +로 명시하고 싶을 때 가끔 사용한다.

  1.0f + 2; // ? 정수와 실수를 더하면 실수 리터럴이 된다. promotion 승진 이라고함!!
  
  return 0;
}