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
  // 주소를 10진수로 보기
  printf("Level %d, address of variable n = %d\n", n, (int)&n);

  if (n < 4)
  {
    my_func(n + 1);
  }

  printf("function addfree %p, my_func address of variable n = %d\n", my_func, (int)&my_func);
  printf("comback Level %d, address of variable n = %d\n", n, (int)&n);
}