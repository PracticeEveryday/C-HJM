#include<stdio.h>
#include<limits.h>
#include<float.h>

int main () {
  double d = 3.141592653897923120710375091293190385902479139421983719365916389f;

  printf("%c\n", 'A');
  printf("%s\n", "I love you");

  // 문자 열이 길면 백슬래시를 통해 이어 사용할 수 있다!
  printf("Evenf if there's a small chance, \
we owe this to everyone who's not in this room to try.\n");

  printf("\n");

  // unsigned Max 를 i를 넣으면 감당 못한다 -1이 출력됨!
  printf("%d %i %i %i\n", 1004, 1234, INT_MAX, UINT_MAX);
  // 음수를 넣을 수 없는 %u에 음수를 넣으면 이상한 수가 나온다.
  printf("%u %u %u \n", 1024, -1, UINT_MAX);

  printf("\n");
  
  // C가 %f의 형식 변환자로 출력을 하려고하면 내부적으로 double로 바꾼다고 한다.
  printf("%f %f %lf\n", 3.141592f, d, d);
  printf("%a ,%A\n", d, d);
  printf("%e %E\n", d, d);
}