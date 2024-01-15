#include <stdio.h>

int min_int(int i, int j);

int main()
{
  int a = 123;
  int b = 1234;

  printf("%d\n", 123);
  printf("%p\n", &a);

  printf("%d\n", 1234);
  printf("%p\n", &b);

  return min_int(a, b);
}

int min_int(int i, int j)
{
  // 새로 선언한다.
  // a, b와 주소가 다르다!
  printf("%p\n", &i);
  printf("%p\n", &j);

  return i > j ? i : j;
}