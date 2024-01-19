#include <stdio.h>

double average(double *, double *);

int main()
{
  double arr1[5] = {10, 13, 12, 7, 9};
  printf("Avg = %f\n", average(arr1, arr1 + 5));

  return 0;
}

// 이런 패턴을 알고 있으면 도움이 많이 된다!
// 이터레이터를 많이 사용하는 데 이 개념으로 접근해야 이해가 쉽다!
double average(double *start, double *end)
{
  // int count = 0;
  int count = end - start; // 주소 - 주소는 선언한 자료형 * 주소 간의 간격이다.
  double avg = 0.0;

  // 부등식을 사용하는 것이 좀 더 많이사용한다.
  while (start < end)
  {
    avg += *start++;
    // count++;
  }

  avg /= (double)count;

  return avg;
}