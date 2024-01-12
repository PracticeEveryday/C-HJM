#include <stdio.h>

int main () {
  const int NUM_DAYS = 365;
  char my_chars[] = "Hello World!";

  // Arr 사이즈를 Symbolic Const를 자주 활용하기도 한다
  // Square Bracket 대괄호를 이용해 메모리를 몇 칸 받을 지 정한다.
  int daily_temperatur[NUM_DAYS];

  // double 사이즈인 메모리가 365개 개수 만큼 쭉 나열되어 있는 공간을 받아와 첫 주소를 변수에 넣어준다!!
  double stock_prices_history[NUM_DAYS];

  printf("%zd\n", sizeof(stock_prices_history));
  printf("%zd\n", sizeof(double) * NUM_DAYS);
  printf("%zd\n", sizeof(stock_prices_history[0]));

  int my_number_1 = 1;
  int my_number_2 = 2;
  int my_number_3 = 3;
  int my_number_4 = 4;
  int my_number_5 = 5;

  // 왜 배열로 쓰는가?
  // 위의 5개의 공간을 한 줄씩 쳐가며 프로그래밍 하는 것보다 같은 자료형 이라면 한 번에 공간을 할당받아
  // subscripts, indices, offsets로 바로 접근하게 활용하기 위해서이다!!
  // subscripts: 아랫 첨자 [안에 숫자]
  // indices: index의 복수
  // offsets: 첫 메모리 주소로 부터 얼마나 떨어져 있는가?
  int my_numbers[5];

  my_numbers[0] = 1;
  my_numbers[1] = 1;
  my_numbers[2] = 1;
  my_numbers[3] = 1;
  my_numbers[4] = 1;

  int input_numbers[10];
  // scanf("%d", &input_numbers[0]);

  // 변수 이름 자체가 주소이기 때문에 &엔퍼센드를 쓰지 않아도 된다!!
  scanf("%d", input_numbers);

  // out of bound
  // runtime 실행이 될 때 체크가 되는 에러이다!!
  // 할당 받은 메모리의 공간을 넘어가니 런타임 에러가 발생한다!!
  my_numbers[100] = 2;

  // 하위 h들은 찍히지 않는다!!
  printf('h');
  printf('h');
  printf('h');
  printf('h');
  
  // compile error는 문법 오류만 체크 해준다.

  return 0;
}