#include <stdio.h>

long get_long(void);

int main()
{
  long number;
  while (1)
  {
    // 안전하게 사용자로 부터 long 타입의 값을 하나 입력 받을 것이다.
    printf("Please input a integer between 1 and 100\n");

    number = get_long();

    if (number > 1 && number < 100)
    {
      printf("Ok. Thank you\n");
      break;
    }
    else
    {
      printf("Wrong input. Please try again\n");
    }
  }

  printf("Your input %ld is between 1 and 100. Thank you\n", number);

  return 0;
}

long get_long(void)
{
  {
    printf("Please Input at integer and press enter\n");

    long input;
    char c;

    // integer를 입력 받으면 scanf의 리턴문은 1이다.
    // 자료형일 일치할 때만 입력 받은 개수를 리턴하기 때문이다!!
    // 진입 조건이 있는 loop!!
    while (scanf("%ld", &input) != 1)
    {
      printf("Your input : ");

      while ((c = getchar()) != '\n')
      {
        putchar(c);
      }
      printf(" - is not a integer. Please try again\n");
    }

    printf("Your input %ld is an integer. Thank you.\n", input);

    return input;
  }
}