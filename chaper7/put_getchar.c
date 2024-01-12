#include <stdio.h>

int main ()
{
  /**
   * 1. Introduce getchar(), putchar()
   * 2. Use while loop to process charecter sequences
   * 3. Filter a specific charater
   * 4. Convert numbers to asterisks // 숫자 to *
   * 5. Lower characters to Upper caracters // 소 -> 대
  */

  char ch;

  // getchar, putchar는 int를 받아 아스키 코드로 바꿔준다!
  // 문자 하나(한 글자)를 가져온다.
  ch =  getchar();  // buffer
  // 한 글자를 출력한다.
  // putchar(ch); 


  // 프로그램을 실행시키면 문자를 여러개 입력 시킬 수 있다.
  // 왜 그럴까?
  // 여러개의 문자를 입력 시키고 엔터를 치면 입력한 문자들이 임시 저장소(버퍼)에 들어간다.
  // 이 후 getchar가 임시 저장소에서 데이터 하나씩 꺼내오게 되는 데 한글자를 꺼내옴을 반복하다 엔터 \n을 만나면 while문을 빠져나가는 것이다!!
  // 버퍼라는 공간에 하나씩 빼내다가 조건을 만족하지 못할 때 while문을 탈출하는 것이다.

  // 내부적으로 컴퓨터가 처리하는 기본적인 방식과 가장 유사하다
  while (ch != '\n')
  {
    putchar(ch);

    ch = getchar();
  }

  // 코드를 작성하다 보면 블록단위, 묶음 단위로 작성하고 싶어진다.
  // 그래야만 유사한 작동을 하는 코드를 보게 되고 이해하기가 쉽기 때문이다.
  // 입출력만 분석하여 설계하기 쉽기 때문이다
  printf("\n");
  char ch_2;
  // 대입 연산자 순위가 비교 연산자 보다 우선순위가 늦기에 괄호로 감싸야 된다!
  while ((ch_2 = getchar()) != '\n')
  {
    if(ch_2 == 'f' || ch_2 == 'F')
      ch_2 = 'X';

    if(ch_2 != 'H'){
      // putchar(ch_2);
    }

    // 숫자는 전부 아스타리스크로 바꾸기
    // 1. for문 사용
    for(int i = '0'; i <= '9'; i++) {
      if(ch_2 == i){
        ch_2 = '*';
      }
    }
    
    // 2. if문 사용
    // if문이 더 효율적이고 직관적이다!
    // if(i >= '0' && i <= '9') 
      // ch_2 = '*';

    if(ch_2 >= 'a' && ch_2 <= 'z') 
      ch_2 -= 'a' - 'A';
    else if(ch_2 >= 'A' && ch_2 <= 'B')
      ch_2 += 'a' - 'A';

    putchar(ch_2);
  }
  


  return 0;
}

// printf, scanf가 아닌 다른 입출력 함수도 존재한다.
// 내부에 버퍼 라는 공간을 사용해서 작동을 한다.
// 한글자씩 처리하는 입출력 함수도 존재한다.