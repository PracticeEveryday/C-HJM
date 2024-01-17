#include <stdio.h>

#define MONTHS 12 // symbolic constant, allocate to macro

// 배열은 동일한 자료형의 연속된 메모리 공간을 할당 받는다.
int main()
{
  int arr[4];

  arr[0] = 2;
  arr[1] = 3;
  arr[2] = 4;
  arr[3] = 5;

  int high[MONTHS] = {2, 5, 11, 18, 23, 27, 29, 30, 26, 20, 14, 4};

  for (int i = 0; i < MONTHS; ++i)
  {
    // 인덱싱을 통해 하나의 변수인 것처럼 사용할 수 있다.
    // 인덱스를 활용해 포문을 쉽게 활용할 수 있다! <- 일렬로 나열되어 있으니 거리마다 값에 접근해 사용하는 것!
    printf("%d\n", high[i]);
  }
  printf("\n");

  float avg = 0.0f;
  for (int i = 0; i < MONTHS; ++i)
  {
    avg += high[i];
  }

  printf("Average = %f\n", avg / (float)MONTHS);

  // 선언과 동시에 초기화를 끝낸다면 재 활당이 불가능하다.
  // 꼭 하나씩 넣어서 수정해야한다.
  // high = {2, 5, 11, 18, 23, 27, 29, 30, 26, 20, 14, 4};
  // high[12] = {2, 5, 11, 18, 23, 27, 29, 30, 26, 20, 14, 4};
  high[0] = 1;
  high[1] = 2;

  // file에 입출력을 가져와 보통 할당하기도 한다.

  //  배열을 이름은 할당 받은 공간의 첫 번재 주소이다.
  printf("%d\n", high);
  printf("%p = %p\n", high, &high[0]);
  for (int i = 0; i < MONTHS; ++i)
  {
    // 4byte씩 차이가 난다.
    printf("%p\n", &high[i]);
  }
  printf("\n");

  // 인덱스의 첨자가 할당 받은 사이즈를 넘어가거나 음수가 들어오면 안되지만,
  // 하지만 컴파일과 실행은 된다!! <- gcc!
  // c언어 자체는 프로그래머를 믿는다.
  // 매번 체크하면 효율성이 너무 떨어진다!!
  high[13] = 4;
  high[-1] = 4;
  printf("%d\n", high[13]);
  printf("%d\n", high[-1]);

  // const int temp = 0;

  // const 배열은 값을 바꿀 수 없다.
  const int low[MONTHS] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  // low[1] = 100;

  // static을 붙이면 0으로 자동으로 초기화 됨 (storage class)
  static int not_int[4];
  for (int i = 0; i < 4; i++)
  {
    printf("%d\n", not_int[i]);
  }

  // 초기화 시 배열 사이즈보다 작게 초기화 하면 나머지 자리에 0을 자동으로 채워준다.
  // 초기화를 하지 않고 배열을 선언 할 시, 컴파일러가 나중에 이 공간을 사용하려고 초기화를 안했구나 라고 해서 따로 특정값으로 초기화 하지 않는다!
  int insuff[4] = {2, 4};
  for (int i = 0; i < 4; i++)
  {
    printf("%d\n", insuff[i]);
  }

  // 배열 변수 선언 시 사이즈를 지정해 주지 않으면 컴파일러가 초기화한 개수에 맞게 메모리를 할당 받는다..

  const int omit_size[] = {1, 2, 3, 4, 5};
  printf("%d\n", sizeof(omit_size));
  printf("%d\n", sizeof(int));
  printf("%d\n", sizeof(omit_size[0]));

  // 사이즈를 알지 못하기에 for문을 도는 데 어려움이 있는데 이를 첫번째 메모리 공간의 사이주와 할당 받은 전체 메모리 공간을 이용하여 해결할 수 있다!
  // ☑️ 동적 할당에서는 이렇게 작동되지 않는다!
  for (int i = 0; i < sizeof omit_size / sizeof omit_size[0]; i++)
  {
    printf("%d\n", omit_size[i]);
  }

  // 인덱스에는 양의 정수가 들어와 한다! 0도 안 된다!
  // 값대신 표현식도 가능하다.
  float arr3[3 * 4 + 1]; // == arr3[13]
  printf("%d\n", sizeof arr3);

  // float arr7[1.5]; 안된다.
  float arr8[(int)1.5]; // 형변환은 가능하다!!
  printf("%d\n", sizeof(arr8));

  int n = 8;
  float arr10[n];
  printf("%d\n", sizeof(arr10)); // 변수 길이 배열 지정 방식은 C99에서는 가능했는데 C11 부터 optional이 되었다.
  // vs <- MS는 해당 문법이 안된다. gcc는 된다! Variable-Length Array!
}