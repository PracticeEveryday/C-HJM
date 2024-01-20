#include <stdio.h>

int main()
{
  // type qualifiers: const, volatile,
  // qualifiers <- 자격을 부여하다 라는 뜻이 있음.

  // 변수에 값을 바꿀 수 없도록 한정해 주는 역할을 함.
  const double PI = 3.14159;
  // PI = 2.14159;

  // const 이기 때문에 배열 요소도 못 바꿈
  // 배열의 원소의 값들을 못 바꾸게 막는다!
  const int arr[5] = {1, 2, 3, 4, 5};
  // arr[1] = 123;

  // double 배열도 마찬가지 -> arr2 원소의 값이 아무것도 바뀌지 않으면 좋겠다는 게 의도임.
  const double arr2[3] = {1.0, 2.0, 3.0};
  // arr2[0] = 100.0;

  // warning -> 근데 포인터로는 바뀜..
  // so pointer 자체도 const를 지정해줘야 못 바꾸게 할 수 있다.
  const double *pd = arr2;
  //*pd = 3.0;      // pd[0] = 3.0; arr2[0] = 3.0; 과 같은 역할
  // pd[2] = 1024.0; // arr2[2] = 1024.0;과 같은 역할

  printf("%f\n", pd[0]);
  printf("%f\n", pd[2]);
  printf("%f\n", arr2[2]);

  // 포인터 변수는 어떠한 주소값을 가지고 있는 변수이다.
  // 변수에 저장되어 있는 주소 값은 바꿀 수 있게 되어 있다..
  pd++;
  printf("%f\n", pd[0]);

  // const를 붙여주면 안전하겠거니 하지만, 포인터로 배열을 접근할 때는 골치아픈 상황이 나타나기도 한다.
  // pd++; 도 막고 싶다면?
  // const를 앞뒤로 붙이면 된다..
  // 아무 것도 못 바꾸고 싶으면 앞 뒤로 다 붙이면 된다.
  const double *const pd2 = arr2;
  pd2++;

  // const double* pd = arr2; <- pd포인터가 가리키고 있는 곳의 메모리 값을 못 바꾼다.
  // double * const pd = arr2; <- 포인터 변수 주소 값을 못바꾼다 라는 의미이다.
}