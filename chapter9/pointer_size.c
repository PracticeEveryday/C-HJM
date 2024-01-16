#include <stdio.h>

int main()
{
  char a;
  float b;
  double c;

  char *ptr_a = &a;
  float *ptr_b = &b;
  double *ptr_c = &c;

  printf("%zd %zd %zd\n", sizeof(a), sizeof(b), sizeof(c));
  // 포인터의 사이즈 크기
  // 동네가 크던 작던, 우편 변호의 크기도 사이즈가 같다.
  // x32 -> x64로 하면 메모리 주소가 길어지고, 더많은 메모리 공간을 사용 할 수 있게됨
  // 각 할당 받은 자료형의 첫번째 주소가 포인터 변수에 담긴다.
  // 다양한 자료형에 대한 포인터 변수들의 사이즈는 동일하다!
  // <- 메모리 주소의 값들을 저장하기 때문에 동일하다!
  printf("%zd %zd %zd\n", sizeof(ptr_a), sizeof(ptr_b), sizeof(ptr_c));
  // 주소 크기 줄력
  printf("%zd %zd %zd\n", sizeof(&a), sizeof(&b), sizeof(&c));
  // 자료형 사이즈 직접 출력
  printf("%zd %zd %zd\n", sizeof(char *), sizeof(float *), sizeof(double *));

  return 0;
}