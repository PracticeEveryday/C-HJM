#include <stdio.h>

int main () {
  // 숫자 자리수를 표현할 때 진법이 높아 질 때마다 자리수가 줄어든다
  unsigned int decimal = 4294967295;
  unsigned int binary = 0b11111111111111111111111111111111; 
  unsigned int oct = 037777777777; // 0은 빈자리를 의미하는 것이 아니라 8진수를 의미하는 것이다.
  unsigned int hex = 0Xffffffff;

  // 2진수 8진수 16진수로 표현했지만 모두 같은 숫자이다.
  printf("%u\n", decimal);
  printf("%u\n", binary);
  printf("%u\n", oct);
  printf("%u\n", hex);

  // 8진수나 16진수로 출력하는 방법
  // %o -> 8진수, %x -> 16진수, %'#'o -> 앞에 #을 넣으면 어떻게 표현하면 되는지 prefix까지 붙여서 알려준다.
  // 0x 0X 대문자로 해도 상관 없다 :)
  printf("%o %x %#o %#x %#X\n", decimal, decimal, decimal, decimal, decimal);

  return 0;
}