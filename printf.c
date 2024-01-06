/*
 * 보통 저작권 많이 표현함
 * Written by D H Kim
*/


// 링커가 실제로 printf가 구현된 코드를 실제로 합쳐서 exe 파일에 넣어준다!,
#include <stdio.h>

int main (void) {
  // \n <- escape sequence (줄바꿈)
  // 따옴표 안에 있는 것들은 문자열로 인식된다!
  // 백슬래쉬를 만나면 백슬래쉬 뒤에 있는 하나의 문자까지 합쳐 하나의 문자로 인식한다.
  // 잠깐 벗어나기에 escape sequence라고 설명하기도 한다.

  // 따옴표 앞에 백슬래쉬를 넣지 않으면 문자열이 끝난 것으로 인지한다.
  printf("\"The truth is... \nI am Ironman.\"\n\n");


  return 0;
}

int main() {
  int x, y, z;
  z = x + y;

	x = 1;
	y = 4;

  printf("The answer is z"); // 진짜 z 가 나온다..

	// 따옴표 안에는 다 문자로 인식한다 더해서 주지 않는다..
	// 컴파일러 입장에서는 문자다!
	printf("The answer is 1 + 4"); // 1 + 4가 나온다.


	// 아래와 같이 포맷을 맞출 수 있게 된다!
	printf("The answer is %d", 7);
	printf("The answer is %i", 1 + 2);
	// d -> decimal 10진수
	// i -> integer 정수

	// 각각의 자리에 순서대로 들어간다!!
	printf("%i + %i = %i", x, y, z);
}