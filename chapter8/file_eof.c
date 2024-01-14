#include <stdio.h>
#include <stdlib.h> // exit()

int main()
{
  int c;
  // file이라는 포인터 변수에 stream이 담긴다.
  FILE *file = NULL;
  char file_name[] = "my_file.txt";

  // 파일을 읽어오거나 저장할 수 있도록 도와주는 라이브러리
  // fopen 파일에 스트림을 열어주는 함수
  // 아스키로 된 문서를 읽거나, 바이너리 파일을 읽어올 수도 있다.
  file = fopen(file_name, "r");

  // 스트림을 여는 데 실패하면 NULL을 담아 놓는다.
  if (file == NULL)
  {
    printf("Failed to open file\n");
    // 프로그램 자체를 종료해버리기
    // 프로그래머들에게 알려줄 때 메시지, Code로 넘겨주는 것이다.
    // 유언처럼 남기는 것임.
    // 보통 실패할 때 1이나 -1으로 남기는 것이 관습이다.
    exit(1);
  }

  while ((c = getc(file)) != EOF)
  {
    printf("%c", c);
    putchar(c);
  }

  // stream을 닫아주기
  // 운영체제가 닫아야 되는 것을 알게 됨!
  fclose(file);

  return 0;
}