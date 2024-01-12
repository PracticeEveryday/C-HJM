#include <stdio.h>

int main () {
  // 같은 자료형만 콤마 연산자로 할당할 수 있다.
  // update 안에서 두 가지 표현식을 사용할 수도 있다!
  for(int n = 1, nsqr = n * n; n < 10; n++, nsqr = n * n)
    printf("%d %d\n", n, nsqr); // 여기서의 콤마는 연산자가 아니라 그저 Separator이다! 구분자이다! 구분지어주는

  int i, j;
  i = 1;
  // 후의 증감 연산자가 계산이 되어 버린다!
  i++, j = i; // 콤마는 시퀀스 포인터 기능도 한다! 즉, 콤마를 만날 때 표현식이 마무리되고 값을 계산하는 포인트가 된다.
  printf("%d %d\n", i, j);

  int x, y, z;
  z = x = 1, y = 2;
  printf("%d %d %d\n", x, y, z);

  z = (x = 1), y = 2;
  printf("%d %d %d\n", x, y, z);

  // 콤마 연산자의 결과는 가장 오른쪽에 있는 값이다.
  // 즉, z에는 (x, y) 중 y 값이 들어가는 것이다!
  z = ((x = 1), (y = 2));
  printf("%d %d %d\n", x, y, z);

  // warning: left operand of comma operator has no effect 
  // 위 에러가 생성되는 데 괄호 내 콤마는 오른쪽의 값이 들어가기에 123은 아무 영향이 없다!
  int my_money = (123, 456);
  printf("%d\n", my_money);

  return 0; 
}