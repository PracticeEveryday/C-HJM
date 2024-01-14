#include <stdio.h>
#include <math.h>

int main() {
  /*
      비교 연산자는 물어보는 것이다. 크니? 작니?
      이 후 평가 했을 때 이것이 사실이냐 거짓이냐를 판정해 주는 것이다.
      Relational Operators
      <       is lessthen
      <=      is less than or equal to
      ==      is equal to
      >=      is greater than or equal to
      >       is greater than
      !=      is not equal to
  */

 int n = 0;
  while (n++ < 5)     // n++ < 5 is a relational expression 관계에 대해 평가하는 표현식이다
  {
    printf("%d\n", n);
  }
  
  printf("\n");

  // char c = 'A';
  // while (c != 'Z')
  // {
  //   printf("%c\n ", c);
  // }
  
  const double PI = 3.1415926535897932384626433832795;   // const 상수 생성 최근에는 define 보다 const로 선언하는 것을 더 선호함
  double guess = 0.0f;

  printf("Input pi: ");
  scanf("%lf", &guess);

  //while (guess != PI) // 위의 const PI하고 정확하게 일치해야지 통과한다 ㅠㅠ
  while (fabs(guess - PI) > 0.01)     // 추측한 숫자 뺴기 const 상수 PI의 값의 절대값이 0.01 보다 크면 while 문을 도는 것이다.
  // 실수끼리 비교를 할 때는 정수 비교와 달리 직접적으로 비교하는 게 어려울 수 있다.
  // 이 때 근사치를 이용해서 비교할 수 있다!!
  {
    printf("Fool! Try Agail. \n");
    scanf("%lf", &guess);
  }
  printf("Good!\n");

  return 0;
}