#include <stdio.h>

int main()
{
  int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
  int *parr[] = {arr[0], arr[1]};

  // 포인터의 배열 vs 배열
  printf("%p\n", &parr[0]); // <- 포인터 배열의 주소가 나온다. 포인터 arr 자체의 주소
  printf("%p\n", parr[0]);  // <- 포인터 배열의 첫번째 요소가 있는 주소가 나온다. 즉, arr[0]의 주소
  printf("%p\n", arr);      // 첫번째 요소의 주소인 것처럼 사용가능하다 주소를 저장하는 별도의 메모리 주소는 없다! 그냥 c 문법에서 알려주는 것 뿐
  printf("%p\n", &arr[0]);
  printf("%p\n", arr[0]);
  printf("%p\n", &arr[0][0]);
}