#include <stdio.h>

int main()
{
  int a = 123;
  int b = 456;
  int *a_ptr = &a;

  printf("%d %d\n", a, b);
  printf("%d %d\n", a, b);

  // swap하는 함수를 만들어보자

  return 0;
};