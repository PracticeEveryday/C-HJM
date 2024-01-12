#include <stdio.h>

int main()
{
  const int secret_code = 337;
  int input;
  do
  {
    // 비교 하기 전에 일단 한번 실행 된다.
    printf("Enter secret code: ");
    scanf("%d", &input);

    // 조건이 참이라면 계속 입력을 받는다!!
    // false면 탈출한다!
  } while (input != secret_code);

  printf("Good!\n");

  return 0;
}