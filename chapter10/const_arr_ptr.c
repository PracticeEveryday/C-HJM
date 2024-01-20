#include <stdio.h>

void printf_array(const int arr[], const int n);
void add_value(int arr[], const int n, const int val);
int sum(const int[], const int);

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  // 사이즈 구하기
  const int n = sizeof(arr) / sizeof(arr[0]);

  printf_array(arr, n);
  // return으로 받아오지 않고 포인터를 넘김으로써 상위 스콥의 메모리에 접근하여 값을 바꾼 것이다!
  add_value(arr, n, 100);
  printf_array(arr, n);

  int result = sum(arr, n);
  printf("Sum = %d\n", result);
  printf_array(arr, n);

  return 0;
}

// 배열 안의 원소를 출력하는 함수
void printf_array(const int arr[], const int n)
{
  for (int i = 0; i < n; ++i)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

// add_value는 배열 자체에 값을 더하는 것이기에 const를 붙이면 안된다!
void add_value(int arr[], const int n, const int val)
{
  int i;
  for (i = 0; i < n; i++)
    arr[i] += val;
}

// 배열의 원소들은 안바꾸고 싶다!!
// 함수 안에 값을 변화 하려고 하면 안된다를 const로 보여 주는 것
// 배열의 사이즈도 바뀔 필요가 없는 것이다.
// 사람은 실수하는 존재다. 실수를 줄일 수 있게 여러가지를 미리 배려 해 놓아야 한다.
// 컴파일을 사용하여 에러를 발견할 수 있도록 해놓는 것이 가장 좋다.
int sum(const int arr[], const int n)
{
  int i;
  int total = 0;
  for (i = 0; i < n; i++)
  {
    total += arr[i];
  }
  return total;
}