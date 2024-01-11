#include<stdio.h>

int main () {
  double seed_money, target_money, annual_interest;

  printf("Input seed money :");
  scanf("%lf", &seed_money);

  printf("Input target money :");
  scanf("%lf", &target_money);

  printf("Input annual interest(%%) : ");
  scanf("%lf", &annual_interest);

  double fund = seed_money;
  int your_count = 0;

  while (fund < target_money)
  {
    fund = fund + fund * annual_interest / 100.0;
    your_count = your_count + 1;

    // printf("year %d, fund %f \n", your_count, fund);
    printf("%f\n",  fund);
  }

  printf("It takes %d years\n", your_count);

  return 0;  
}