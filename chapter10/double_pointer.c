#include <stdio.h>

int main()
{
  // 포인터의 배열로 배열의 배열을 만들 수 있다.
  // 2차원 ~ 다차원 배열을 떠올릴 수 있다!!

  // 두 개의 1차원 배열
  int arr0[3] = {1, 2, 3}; // 1이 담겨있는 주소
  int arr1[3] = {4, 5, 6}; // 4가 담겨있는 주소

  int *parr[2] = {arr0, arr1}; // 포인터 배열 포인터가 담길 수 있는 공간을 2개 할당 받은 변수

  for (int j = 0; j < 2; j++)
  {
    for (int i = 0; i < 3; i++)
    {
      printf("%d(==%d, %d) ", parr[j][i], *(parr[j] + i), *(*(parr + j) + i));
    }
    printf("\n");
  }

  // 2차원 배열
  int arr2[2][3] = {{1, 2, 3}, {4, 5, 6}};
  int *ptr1 = arr2[0];
  int *ptr2 = arr2[1];

  for (int i = 0; i < 3; i++)
  {
    printf("%d ", ptr1[i]);
  }
  printf("\n");

  for (int i = 0; i < 3; i++)
  {
    printf("%d ", ptr2[i]);
  }
  printf("\n");

  // 포인터 배열로 2차원 배열 사용하기
  int arr3[2][3] = {{1, 2, 3}, {4, 5, 6}};
  int *parr2[2] = {arr3[0], arr3[1]};

  for (int j = 0; j < 2; j++)
  {
    for (int i = 0; i < 3; i++)
    {
      printf("%d %d %d %d\n", arr3[j][i], parr2[j][i], *(parr2[j] + i), *(*(parr2 + j) + i));
    }
    printf("\n");
  }
}