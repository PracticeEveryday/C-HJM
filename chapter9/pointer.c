#include <stdio.h>

int main()
{
  int a, b;
  a = 1;

  int *a_ptr; // pointer 변수 선언 <- 정수형 변수의 주소를 저장할 수 있다!!
  a_ptr = &a; // &: address of operator <- 주소를 알려주는 연산자

  // 주소를 출력할 시에 %p로 출력한다! <- 주소 값의 크기는 변수형의 크기와 상관없다!
  printf("%d %d %p %p\n", a, *a_ptr, a_ptr, *a_ptr);

  *a_ptr = 456;
  // a의 값도 456으로 변경되었다.
  // 주소를 통해 접근할 것이냐, 변수를 통해 접근할 것이냐는 프로그래머 입장에서만 차이가 있다.
  // 해당 값에 접근하는 방식은 주소를 통해 접근하는 것이다!
  printf("%d %d %p %p\n", a, *a_ptr, a_ptr, *a_ptr);

  // int 자료형에 자료를 넣게 되면
  // 메모리 내의 주소 값 정수 자체가 들어간다!!!
  // 프로그래머의 자유를 침해하지 않는다 <- 에러가 아니라 워닝으로 뱉어낸다.
  b = a_ptr; //(int)a_ptr; <- 이렇게 사용하는 경우는 거의 없다..
  printf("1. %d\n", b);

  b = *a_ptr;
  printf("2. %d\n", b);

  b = *a_ptr;
  printf("3. %d\n", b);

  *a_ptr = 789;
  // b는 포인터 주소를 넣어준 것이 아니라 int 형 값 자체를 넣어준 것이다. <- 즉, redirection 과 같은 기능 없다!!
  // a 가 변했다고 해서 b의 값이 변하는 것은 아니다!
  printf("4. %d\n", b);
  // a와 b는 주소가 다르다! 다른 오브젝트이다.
  printf("%p %p\n", &a, &b);
  printf("%d %d %p %p %p\n", a, *a_ptr, a_ptr, *a_ptr, &b);

  // a 에 값을 직접 저장하기
  // a와 a의 주소를 담고 있는 모든 곳이 바뀜!!
  a = 10000;
  printf("%d %d %p %p\n", a, *a_ptr, a_ptr, *a_ptr);

  return 0;
}