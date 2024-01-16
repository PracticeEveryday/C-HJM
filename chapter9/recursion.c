#include <stdio.h>

void my_func(int);

int main()
{
  // 재귀 호출은 무한 루프를 구현하고 싶을 때 사용하지 않는다. <- while for문 사용하자
  // 스택 메모리 보다 커 버리면 스택오버 플로우가 발생하기 때문이다.
  my_func(1);

  return 0;
}

void my_func(int n)
{
  // 주소가 다르면 이름이 같아도 다른 변수이다.
  // 변수 n의 사이즈 만큼 아니라 조금 더 크게 난다.
  // 스택에 쌓이는 게 변수만 쌓이는 것이 아니라, 프로그램도 같이 스택에 쌓인다.
  // my_func 자체도 쌓인다.
  // 스택에 쌓이는 것이 변수만이 아니다!
  printf("Level %d, address of variable n = %p\n", n, &n);

  // 종료 조건이 없다면 스택 메모리가 다 차서 stack overflow가 발생한다!
  if (n == 5)
  {
    return;
  }
  // return 되면서 n이 줄어드는 것이 아니라, 돌아오는 것이다!
  // 디버깅 찍어보기
  my_func(n + 1);

  // 종료 조건에 걸릴 때 쌓인 스택들이 빠지면서 아래 코드가 실행된다!!
  // 꿈에서 꿈을 꾸고 꿈을 꾸고 꿈을 꾼 뒤 마지막 꿈에서 깨고 또 깨고 또 깨는 것
  // 인셉션의 중첩 꿈을 생각해보자!!

  printf("comback Level %d, address of variable n = %p\n", n, &n);
}