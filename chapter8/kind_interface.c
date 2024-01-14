#include <stdio.h>

int main()
{
  int count = 0;

  while (1)
  {
    printf("Current count is %d. Continue? (y/n)\n", count);

    int c = getchar();

    if (c == 'n' || c == 'N')
    {
      break;
    }
    else if (c == 'y' || c == 'Y')
    {
      // 첫번째 글자만 남기고 싹 지워버리자.
      count++;
    }
    else
    {
      // y 나 n만 입력해달라고 요청하기
      printf("Please input y or n\n");
    }

    // 뒤에 남은 버퍼를 다 지운다.
    // ypon 이라고 입력 받을 시 y를 제외하고 다 지운다!!
    while (getchar() != '\n')
    {
      continue;
    }
  }

  return 0;
}