#include <stdio.h>

int main()
{
  int c;

  // ASCII CODE는 음수가 없다
  // 근데 왜 getchar 함수는 unsigned int를 사용하지 않고 int 자료형을 사용할까?
  // EOF => -1 때문이다. <- 입력이 다 끝났다는 것을 알려주기 위함이다.
  // 입력이 다 끝났다는 운영체제가 알려준다.
  // 그 때는 getchar함수는 -1을 입력 받게 된다!
  // 그 때 EOF와 같으면 끝나게 된다!!

  // 콘솔 입력과 파일 입력이 끝낸느 방법이 동일하다.
  while ((c = getchar()) != EOF) // End Of File
  {
    putchar(c);
  }

  // stream <- 흘러가다
  // 컴퓨터에서는 무엇이 흘러갈까? 데이터이다!
  // 콘솔 입출력에서는 우리가 입력한 문자 데이터가 흘러서 프로그램으로 들어간다.
  // 파일을 배울 때 저장되어 있는 데이터가 흘러 우리가 만든 프로그램을 들어간다.
  // pritnf putchar로 콘솔창에 출력하면 우리가 만든 프로그램으로 부터 데이터가 흘러 나와 콘솔로 들어간다.
  // 데이터 스트림을 이용해 파일로 흘려 보낼 수도 있다.
  // 이 스트림이 언제 끝나는지를 표시하는 것이 EOF End Of File 키워드이다!!
  while (1)
  {
    c = getchar();
    printf("%d\n", c);

    if (c == EOF)
    {
      printf("%c\n", c);
      break;
    }
  }
}