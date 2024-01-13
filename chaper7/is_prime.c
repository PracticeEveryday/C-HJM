#include <stdio.h>

int main (){
  unsigned int num;

  // 상태 표현 함수
  // 일단 isPrime은 트루여야 한다.
  _Bool isPrime = 1; // flag, try bool type

  scanf("%u", &num);
  if(num == 1 || num == 2) isPrime = 1;

  // 제곱한 것이 num이하 인 것만 계산한다!
  for(unsigned i = 2; (i * i) <= num; i++) {
    // 나누었을 때 0이 되는 숫자가 있으면 0으로 바꿔준다.
    // 소수가 아니니까!!
    if(num % i == 0) {
      
      isPrime = 0;
      if(i * i == num)
        printf("%u\n", i);
      else 
        printf("%u and %u\n", i, num / i);

      //break;
    }
  }

  if(isPrime) {
    printf("%u is a prime number.\n", num);
  }  else {
    printf("%u is not a prime number.\n", num);
  }
}



