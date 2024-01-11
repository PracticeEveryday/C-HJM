#include <stdio.h>

int main () {
  int seconds = 0, minutes = 0, hours = 0;

  while (seconds >= 0 ) {
    printf("Input Seconds : ");
    scanf("%d", &seconds);

    minutes = seconds / 60;
    seconds %= 60;

    hours = minutes / 60;
    minutes %= 60;
    if(seconds < 0) continue;
    printf("%d hours, %d minuts %d seconds\n", hours, minutes, seconds);
  }

  printf("Good Bye\n");
  return 0;
}


int main () {
  int div, mod;

  div = 11 / 5;
  mod = 11 % 5;
  printf("div = %d, mode %d\n", div, mod);

  div = 11 / -5;
  mod = 11 % -5;
  printf("div = %d, mode %d\n", div, mod);

  div = -11 / -5;
  mod = -11 % -5;
  printf("div = %d, mode %d\n", div, mod);

  div = -11 / 5;
  mod = -11 % 5;
  printf("div = %d, mode %d\n", div, mod);

  return 0;
}