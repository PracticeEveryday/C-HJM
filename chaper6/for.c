#include <stdio.h>

int main () {
  // Indefinite loop vs Counting loop

  // while문은 Indefinite loop이다. <- 무한 루프
  // 진입 조건은 검사하지만, 종료 조건이나 탈출 조건 같은 것은 신경쓰지 않는다.
  // 알아서 중단하고 나와라
  while (0)
  {
    /* do something */
  }

  int i;

  i = 1;
  // while문은 Counting Loop로 활용할 수 있다.
  // 1. Counter Initialization <- i
  // 2. Counter Check          <- i <= 10
  // 3. Counter Change         <- i++
  while (i <= 10)
  {
    printf("%d\n", i);
    i++;
  }

  // while문 자체를 Indefinite Loop로 사용하도록 설계가 되어 있기에 우리가 탈출 조건을 잘 못 달아 무한 루프가 도는 경우가 있는 것이다!
  
  // Counting Loop(가산 루프)를 보다 명확하게 할 수 있도록 구현한 것이 for loop이다.

  // C언어 문화가 시작 시 변수들을 모두 선언하고 시작하는 것이지만, 카운팅 변수가 밖에 있는 것이 불편하다 ㅠㅠ
  int j;

  // 문법 상으로 for loop는 괄호 안에 3개의 문장을 넣을 수 있다

  // 더 편하게 사용하고 실수할 가능성도 줄어든다!!
  // 즉, 가산 루프를 작성하기 위해 필요한 3가지 조건이 하나의 괄호 안에 들어가는 것이다.
  for(j = 1; j <= 10; j++)
  {
    printf("%d\n", j);
  }

  // 초기화 까지 for loop안에서 할 수 있다!!
  // 반복에 필요한 조건들이 for (괄호 안에 다 들어간다!!)
  // 선언 및 초기화 최초 실행
  // 블록 실행
  // Counter 변경
  // 조건
  // ... 반복
  for(int z = 1; z <= 10; z++) {
    // 이 안에서 z를 사용할 수 있다!!
    printf("%d\n", z)
  }
  return 0;  
}