#include <stdio.h>

// 즉, 포인터 처럼 처리된다.
// 여기서 5는 없는 것과 마찬가지다.
// double average(double arr1[5])
// double average(double *arr1, int size)
// double average(double arr1[], int size)

// -> 즉 함수에서 배열을 받을 떄는 배열을 받는 게 아니라 포인터로 받는다.
// 첫 주소와, 사이즈를 넘겨 받자! 왜냐? 포인터니까 개수 정보를 알 수 없다!

// 차라리 포인터로 받을 수도 있다.! 근데, 이렇게 하면 넘어오는 것이 배열인지 모르니 함수를 선언할 때는 arr[] 이렇게 해준다. <- 아 배열로 넘어오는 구나!
// 모든 언어는 내부적으로 이렇게 다 작성된다!

// average 함수를 사용할 떄 배열을 넣어야 된다는 것을 되살리기 위해서 배열을 표현한다.
// 실질적으로는 포인터와 동일하다
double average(double arr[], int size)
{
  // 8밖에 안나온다..
  // 즉, 포인터의 사이즈가 나와버린다!!
  printf("%zd\n", sizeof(arr));
  double avg = 0.0;
  for (int i = 0; i < size; i++)
  {
    avg += arr[i];
  }

  avg = avg / (double)size;

  return avg;
}

int main()
{
  // 배열의 이름은 연속적으로 할당되어 있는 메모리 공간의 첫번째 주소를 담고 있다. <- 포인터와 유사하다 즉, 완전히 같지 않다! 연산이 안되는 게 있음
  double arr1[5] = {10, 13, 12, 7, 8};
  double arr2[3] = {1.8, -0.2, 6.3};

  printf("Address = %p\n", arr1);
  printf("Size = %lu\n", sizeof(arr1));

  // 배열의 이름은 포인터와 유사하다.
  // 배열은 특성상 배열 안에 데이터가 많기 때문에 함수는 배열을 통째로 복사해서 가져오는 것이 아니라, 포인터로 받으려고 하는 성질이 있다.
  // 즉, 포인터 처럼 처리된다.
  // 포인터를 가져가면 사이즈를 알 수 없으니 전달해주자!
  printf("Avg = %f\n", average(arr1, 5));
  printf("Avg = %f\n", average(arr2, sizeof(arr2)));

  return 0;
}

// 1. double avaerage(double *, int n)
// 2. double avaerage(double [], int n)

// 보통 1번과 같이하면 대부분의 사람들이 알아본다.
// 아 배열의 첫번째 주소를 넘기려고 개수를 같이 넘기는구나 라고!
