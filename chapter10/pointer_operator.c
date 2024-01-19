#include <stdio.h>

int main()
{
  /*
    Pointer Operators
    - Assignment
    - Value finding (dreferencing)
    - Taking a pointer addreess
    - Adding an integer to a pointer
    - Incrementing a pointer
    - Subtracting an integer from a pointer
    - Decrementing a pointer
    - Differencing
    - Comparisons
  */

  int arr[5] = {100, 200, 300, 400, 500};
  int *ptr1, *ptr2, *ptr3;

  ptr1 = arr; // 1. Assignment 포인터 할당(대입) 연산

  // 역참조, 포인터 변수의 주소를 가져오기(& 연산자)
  // dreferencing, Taking a pointer address
  printf("%p %d %p\n", ptr1, *ptr1, &ptr1); // 포인터도 변수다!

  ptr2 = &arr[2];                           // Address-of operator `&`
  printf("%p %d %p\n", ptr2, *ptr2, &ptr2); // 주소 연산자로 3번째 원소의 엘리먼트가 있는 주소를 대입한다.

  ptr3 = ptr1 + 4;                          // 정수 더하기 숫자 4바이트를 더하는 것이 아니라
  printf("%p %d %p\n", ptr3, *ptr3, &ptr3); // 4바이트 짜리가 4개 저장될 수 있는 공간만큼 더한다.
  // 즉, 포인터 주소의 맥락에서 포인터 연산을 봐야 한다. <- 단순한 정수를 더하는 것이 아니다!

  // Differencing
  // t가 붙은 형식 지정자는 포인터의 차이를 받아 출력할 때 사용한다.
  printf("%td\n", ptr3 - ptr1); // 4 - 0 = 4

  ptr1++; // ptr = ptr + 1
  ptr1--; // ptr = ptr - 1
  --ptr1;
  ++ptr1;

  if (ptr1 == ptr3) // 포인터끼리 서로 비교도 가능하다.
    printf("Same\n");
  else
    printf("Different\n");

  double d = 3.14;
  double *ptr_d = &d;

  // 메모리 주소의 사이즈는 항상 동일하다 그러지 같지 않을까?
  // 캐스팅하면 워닝이 안뜬다! <- 포인터도 변수이다!!
  if ((double *)ptr1 == ptr_d) // 정수 타입에 대한 포인터, 인트 타입에 대한 포인터
    printf("Same\n");
  else
    printf("Different\n");
}