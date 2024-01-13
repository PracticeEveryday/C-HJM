#include <stdio.h>
// #include <conio.h> _getche(e는 echo의 약자임) <- Windows에 나옴
// 입력에 대한 메아리를 그려주는 것이다.

int main () {
  char c;
  while ((c = getchar()) != '\n')
  {
    putchar(c);
  }
}