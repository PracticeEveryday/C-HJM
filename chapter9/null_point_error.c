#include <stdio.h>

int main()
{
  int a;
  // 쓰레기 값이 나옴
  printf("%d\n", a);
  printf("%p\n", &a);

  a = 1234;
  printf("%d\n", a);
  printf("%p\n", &a);

  int *ptr;

  printf("%p\n", ptr);
  printf("%d\n", *ptr);

  //  내가 os가 된것 처럼 직접 메모리 주소를 넣어주는 것이다.
  int *ptr_2 = 1234;

  // 주소는 찍어준다!
  printf("%p\n", ptr_2);

  // 1234 주소로 가서 값을 가져오려고 했다.
  // 근데 저 주소로 가보니 내가 할당 받은 공간이 아니다.
  // 왜 너가 할당 받은 프로세스 내의 메모리를 접근 하지 않고 다른 곳으로 가냐?
  // error!!!
  // 여기를 진짜로, 접근 하려고 하니 에러남..
  // printf("%d\n", *ptr_2);

  int *safer_ptr; // = NULL
  int d = 1234;

  // 이거는 확실함
  // safer_ptr = &a;

  // 조건에 따라서 메모리 주소가 대입이 될수도 있고, 안 될 수도 있다.
  // 대입에 결정될지 아닐지는 런타임에 결정된다!!
  if (d % 2 == 0)
    safer_ptr = &a;

  if (safer_ptr != NULL)
    printf("%p\n", safer_ptr);

  // c프로그래머들은 포인터를 선언함과 동시에 NULL값을 초기화 해준다.
  // NULL값을 넣어주는 이유는 이후에 이 포인터를 사용해도 되는 지 아닌 지 확인하기 위해서 사용하는 것이다.
  int *safer_ptr2 = NULL; //<- 기본적으로 그냥 0이다.
  int b;

  scanf("%d", &b);

  if (b % 2 == 0)
    safer_ptr2 = &b;

  // 런타임 오류라는 개념!
  // 포인터를 사용하지 않을지 확실하지 않으니 NULL을 넣는 것이 관습적이다!
  if (safer_ptr2 != NULL)
  {
    printf("%p\n", safer_ptr2);
  }
  if (safer_ptr2 != NULL)
  {
    printf("%d\n", *safer_ptr2);
  }

  // 홀수를 넣으면 0이 되기에 에러가 떨어짐
  printf("%d\n", *safer_ptr2);
  return 0;
}