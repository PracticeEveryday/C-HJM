#include <stdio.h>

// 전처리기로 기호적 상수 선언하기
// 상수를 리터럴로 계속 선언하는 것 보다 기호적 상수를 통해 선언하는 것이다!!
// define 전처리기는 PI라는 부분을 해당 상수로 모두 교채해버린다.
// 모든 상수를 값으로 교체하고 컴파일 하는 것이다.
// 프로그래머를 위한 define이다!!
#define PI 3.141592f

// C, C++ define를 선언할 떄 대문자로 하는 것은 관습이다
#define AI_NAME "Friday"

// 🤔 #define PI = 3.141592f <- 이렇게하면 PI 자리에 등호까지 교체해 버리니 주의하자!

int main () {
  float radius, area, circum;

  printf("Input radius\n");

  scanf("%f", &radius);

  // 원의 넓이 구하기 파이 * 원주율의 제곱
  area = 3.141592f * radius * radius; // area = pi * r * r
  circum = 2.0 *  3.141592f * radius;

  //🤔 우리가 sphere의 넓이, 볼륨 등등을 구할 때 계속해서 3.141592f를 손으로 쳐가며 프로그램을 확장시킬 것인가?
  // 휴먼 에러 3.141'7'92 하면?

  printf("Area is %f \n", area);
  printf("Circumference is %f \n", circum);

  return 0;
}

int main () {
  float radius, area, circum;

  // 중간에 자비스에서 프라이데이로 이름이 바뀐다.
  // 그럼 프로그램에서 Javis로 출력되는 곳을 모두 하드코딩으로 바꿔줘야 될 것이다.
  // 변수 처리하자
  // printf("I'm Javis\n");

  // 1. define 상수로 뺴기
  printf("I'm %s\n", AI_NAME);
  printf("Please, Input radius\n");

  // 2. pi라는 변수를 작동하면 안되나?
  // 다양한 방법이 있다!
  
  // 많은 문제가 생길것이다.
  // float pi = 3.141592f;
  // 아래에서 실수로 pi = 1.0으로 바꾸면?
  // pi = 1.0;

  // const 를 붙여 못 바꾸게 하면 된다!
  // const로 기호적 상수를 할당하는 것이 더 권장 되기도 한다 :)
  const float pi = 3.141592f;

  scanf("%f", &radius);

  // 기호적 상수를 define으로 할당하기
  area = PI * radius * radius; // area = pi * r * r
  circum = 2.0 *  PI * radius;


  printf("Area is %f \n", area);
  printf("Circumference is %f \n", circum);

  return 0;
}