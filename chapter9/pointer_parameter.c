#include <stdio.h>

void swap(int *a, int *b);

int main()
{
  int a = 123;
  int b = 456;
  // swap하는 함수를 만들어보자
  // 주소에 의한 호출로서 call by pointer라고 부르기도 한다
  printf("%p %p\n", &a, &b);

  swap(&a, &b);

  printf("%d %d\n", a, b);

  return 0;
};

void swap(int *a, int *b)
{

  printf("%p %p\n", a, b);

  // tempt는 값을 담고 있기에 a의 주소 값을 역참조해 해당 값을 할당해준다!
  int temp = *a;
  // a = *b <- a의 변수안에다가 b의 값을 넣겠다는 것임 즉, a가 주소 값을 담고 있는 게 아니라 b의 값을 담게됨
  // *a를 통해 a의 주소에 리다이렉트되고 그 공간에 b의 값을 넣겠다는 것임
  *a = *b;
  *b = temp;
}