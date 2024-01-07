#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main () {
  char c = 65;
  short s = 200;
  unsigned int ui = 3000000000U;
  long l = 65537L;
  long long ll = 1234567808642LL;

  printf("%lu\n", sizeof(char)); // 1
  printf("%lu\n", sizeof(short)); // 2
  printf("%lu\n", sizeof(unsigned int)); // 4
  printf("%lu\n", sizeof(long)); // 8
  printf("%lu\n", sizeof(long long)); // 8


  // %c <- 문자열로 출력
  printf("char = %hhd, %d, %c\n", c, c, c);
  printf("short = %hhd, %d, %d\n", s, s, s);
  printf("unsigned int = %u, %d\n", ui, ui);
  printf("long = %ld, %hd\n", l, l);
  printf("long long = %lld, %ld\n", ll, ll);

  return 0;
}