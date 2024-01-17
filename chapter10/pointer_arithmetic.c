#include <stdio.h>

int main()
{
  // best practice 는 NULL을 넣는 것이다.
  // 일반적으로는 포인터 값에 예상가능한 리터럴을 넣지는 않는다.
  int *ptr = (int *)0;

  // error
  // printf("%d\n", *ptr);

  printf("%p, %lld\n", ptr, (long long)ptr); // 0x0, 0

  // 인트 타입에 대한 포인터 변수에 값 1을 더하는 것이 어떤 의미일까?
  ptr++;

  printf("%p, %lld\n", ptr, (long long)ptr);
}