#include <stdio.h>

void draw(int n); // function prototype declaration

int main () {
  int i = 5;
  char c = '#';
  float f = 7.1f;

  // 받는 쪽에서는 모두 int 자료형으로 받는다.
  
  draw(i);


  // promotion 승진이 되어 들어간다.
  // 작은 자료형을 큰 자료형에다 넣을 떈 문제가 되지 않는다.
  // char -> int
  draw(c);
  //best Practice
  draw((int)c);


  // 워닝이 뜬다.
  // 실수는 정수보다 랭킹이 높기 때문이다.
  // draw(f);
  // 컴파일러에 실수가 아니라 정수를 넣을 거라고 명확하게 알려주자
  draw((int)f);

  // Arguments vs Parameters
  // Actual Argument(실인수 실인자), Actual Parameter(실 매개변수) -> argument (value)
  // Formal Argument(형식인수 형식 인자), Formal Parameter(형식 매개변수) -> parameter (variables)

  // 위 Arguments와 Parameters가 너무 혼용되어서 C99에서 정리가 되었다고 함
  // Argument -> Value
  // Parameter -> Variables

  // 호출 하는 측면에서는 변수 i를 넣는 것처럼 보이지만 실제로는 변수 i에 들어있는 값이 넘어간다.
  // 즉 5를 집어 넣는 것이다.
  // 호출하는 측면에서는 값이 들어오므로 Argument Value라고 한다!
  draw(i);


  return 0;
}

// 여기서 int n은 goto HEAR
void draw(int n) {
  // HEAR: int n = 5; 와 같이 할당되는 구조이다!!

  // n 이 어떤 값이 들어와도 아래 코드가 실행될 수 있어야 한다.
  // 함수 draw가 변수 n에 대해서 파라미트라이제이션 되어 있다. 즉, 매개변수화 되어있다

  while (n > 0 )
  {
    printf("#");
    n--;
  }
  printf("\n");
}