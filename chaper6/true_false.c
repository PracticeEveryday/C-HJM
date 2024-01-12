#include<stdio.h>

int main () {
  int tv, fv;

  // 표현식은 값을 같는다! <- 관계 연산자를 활용한 관계 표현식도 값을 같는다!
  tv = (1 < 2); // 사실이 tv에 들어간다.
  tv = (1 > 2); // 거짓이 fv에 들어간다. (1 > 2) 관계 표현식의 값이 fv에 들어간다!

  printf("True is %d\n", tv); // 진실의 값
  printf("False is %d\n", fv); // 거짓의 값

  // -5는 참이다!
  int i = -5;
  while (i) { // i 하나 자체도 표현식이다! 값을 가지니까 말이다
    printf("%d is true\n", i++);
  }

  printf("%d is false \n", i);

  i = 5;
  while (i) { // i 하나 자체도 표현식이다! 값을 가지니까 말이다
    printf("%d is true\n", i--);
  }

  printf("%d is false \n", i);

  // C언어는 0을 제외하고는 모두 True한 값으로 본다!
  // 즉, 0만 false이고 나머지는 다 true이다!

  // while은 true일 떄 실행되는데 무조건 돌게 하고 싶다!
  // 그냥 1을 두는 것 0이 아니면 트루니까! <- 관습적으로 1을 넣기도 한다.
  // 게임을 돌린다거나 인터넷 프로그래밍 서버를 돌릴 때 계속 작동해야 하기에 무한 루프를 사용하는 경우가 많다
  while (1)
  {
    // 종료하고 싶을 때 특정 조건이면 while을 탈출한다는 로직을 구현해 놓는 것이다.
    //
  }
  

  return 0;

}