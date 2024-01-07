#include <stdio.h>

int main () {
  // 따옴표 하나로 문자 하나를 감싼다.
  char c = 'A';
  char d = 65;

  // 문자로 출력 할 수도 있고 정수로도 출력할 수 있다.
  printf("%c %hhd\n", c, c);
  printf("%c %hhd\n", d, d);

  // ASCII 문자에 숫자를 더해 문자를 출력하면 아스키 테이블에 맞는 문자를 출력할 수 있다.
  printf("%c \n", c + 1);


  char a = '\a';
  printf("%c", a);

  float salary;
  // 백스페이스로 커서가 뒤로 움직여서 기다리게 된다!!
  printf("$______\b\b\b\b\b\b");
  scanf("%f", &salary);

  // \t는 줄을 맞춰주는 용도이다.
  printf("AB\tCDEF\n");
  printf("ABC\tDEF\n");

  return 0;
}