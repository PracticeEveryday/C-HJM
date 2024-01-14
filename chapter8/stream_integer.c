#include <stdio.h>

int main()
{
  // Hello 123 3.14 입력하기
  char str[255];
  int i, i2;
  double d;

  scanf("%s %d %lf", str, &i, &d);
  printf("%s %d %lf\n", str, i, d);

  // 3.14가 3으로 찍힌다.
  // 우리가 입력한 것을 의도대로 받아들이지 않고 자료형에 맞게 받아들인다!
  // 어떤 데이터 타입, 자료형으로 받아드리느냐에 따라서 입력하는 값을 다르게 받아들인다!
  scanf("%s %d %d", str, &i, &i2);
  printf("%s %d %d\n", str, i, i2);

  // 버퍼에 남아있는 . 이후 값은 putchar로 나온다.
  char c;
  while ((c = getchar()) != '\n')
  {
    putchar(c);
  }

  printf("\n");

  return 0;
}

// 콘솔이 값을 받아 올 때는 한글자씩 문자로 받아 온다. char type으로!
// scanf printf는 버퍼 내부적으로 문자 형태로 받아온 문자열의 흐름을 분석하여 원하는 형태로
// 받아 들여주고 출력해주는 기능을 가진다.

// scanf <- 스페이스 바가 있으면 구분한다.
// scanf <- 정수로 받아 들일 것인데 3.14로 나오면 점을 만날 때 정수 입력을 다 받았다고 판단한다.
// 정수로 변환할 수 있는 기호가 들어온다면 입력 받은 데 까지만 저장하고 나머지는 버퍼에 그대로 담아둔다.!

// 문자가 왔다갔다 하는 것처럼 보이지만,
// 문자가 아니라 이진수로 변환된 데이터의 스트림이 왔다 갔다 하는 것이다!