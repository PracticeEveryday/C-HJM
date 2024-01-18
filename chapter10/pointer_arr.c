#include <stdio.h>

int main()
{

  int arr[10];

  // 변수를 통해 for문을 만들자
  const int num = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < num; i++)
  {
    arr[i] = (i + 1) * 100;
  }

  // arr 변수는 40바이트 공간을 대표하는 메모리 주소이다.
  // 포인터 변수에 arr 대입할 수 있다!
  int *ptr = arr;

  printf("%p %p %p\n", ptr, arr, &arr[0]);

  ptr += 2;
  // 주소에 8을 더할 것이다. <- 자료형 사이즈 * 2
  // 더하고 난 후 3개의 값이 같다.
  // 포인터 연산으로 arr[2] <- 인덱스 접근을 대채할 수 있다!!
  printf("%p %p %p\n", ptr, arr + 2, &arr[2]);

  // arr의 주소값을 포인터에 대입하여 포인터 연산을 하는 것은 가능하지만 arr 배열 변수 자체는 연산이 안된다.
  // 배열의 이름이 포인터처럼 사용되긴 하지만, 완벽하게 포인터가 아닌 이유는 여기에 있다!
  // arr += 2;

  printf("%d %d %d\n", *(ptr + 1), *(arr + 3), arr[3]);

  // 주의! Dreferencing 한 후, 값을 더한다.
  // 즉, 역참조 후 값을 가져오고 그값에 1을 더하는 것이다!
  printf("%d %d %d\n", *ptr + 1, *arr + 3, arr[3]);
  printf("\n");

  int *ptr2 = arr;
  // for문에서 선언된 변수의 스코프는 포문이 실행되는 블록이다.
  // 변수명이 같더라도 영역이 다르면 다른 변수이다! <- 스택 생각하기
  for (int i = 0; i < num; ++i)
  {
    // 후위 연산자이기 때문에 시퀀스 포인트(세미 콜론)을 만나고 코드가 실행된 이후에 포인터 연산이 실행된다.
    // 1.
    printf("%d %d\n", *ptr2++, arr[i]);
    // 2.
    printf("%d %d\n", *ptr2, arr[i]);
    ptr2++;

    printf("%d %d\n", *++ptr2, arr[i]);

    // 역참조를 한 값에 1을 더해라는 것이다.
    printf("%d %d\n", ++*ptr2, arr[i]);
    printf("%d %d\n", (*ptr2)++, arr[i]);
    // 내가 구성을 원하는 대로 확인해서 구현하면 된다 :)
  }
}