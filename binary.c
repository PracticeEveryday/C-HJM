#include <stdio.h>

void printBinary(int num);

int main()
{
  int number;

  printf("Enter a number: ");
  scanf("%d", &number);

  printf("ASCII code: %c\n", number);

  printf("Decimal: %d\n", number);

  printf("Binary: ");
  printBinary(number);

  return 0;
}

void printBinary(int num)
{
  int i = 0;

  if (num == 0)
  {
    printf("0");
    return;
  }

  int binary[32];

  while (num > 0)
  {
    binary[i] = num % 2;
    num /= 2;
    i++;
  }

  for (int j = i - 1; j >= 0; j--)
  {
    printf("%d", binary[j]);
  }

  printf("\n");
}