#include <stdio.h>

int main()
{
  // best practice 는 NULL을 넣는 것이다.
  // 일반적으로는 포인터 값에 예상가능한 리터럴을 넣지는 않는다.
  int *ptr = (int *)0;

  // error
  // printf("%d\n", *ptr);

  printf("%p, %lld\n", ptr, (long long)ptr); // 0x0, 0

  // 인트 타입에 대한 포인터 변수에 값 1을 더하는 것이 어떤 의미일까?
  ptr++;

  // 4가 나옴
  printf("%p, %lld\n", ptr, (long long)ptr);

  char *char_ptr = (char *)0;
  // 포인터에 1을 더한다는 것은 선언한 자료형의 사이즈만큼 더해준다는 것이다!!
  char_ptr++;

  // 1가 나옴
  printf("%p, %lld\n", char_ptr, (long long)char_ptr);

  char_ptr--;
  char_ptr--;

  printf("%p, %lld\n", char_ptr, (long long)char_ptr);

  // 포인터에다가 어떤 숫자를 더한다는 것은 주소 값에다가 숫자를 절대적으로 더한다는 것이 아니다!
  // 자료형에 맞춰서 건너 뛰어 간다는 의미가 더 강한 것이다 <- 즉, 선언된 자료형의 사이즈 만큼 값이 더해진다.
  // array의 인덱싱을 생각하면 된다.
  // 주소 다루는 것은 재밌다!

  // gcc 컴파일러는 void*을 1바이트로 잡는다.
  // 하지만 홍정모 선생님의 window visual studio에서는 에러르 뱉어낸다.
  void *void_ptr = 0;
  printf("%p, %lld\n", void_ptr, (long long)void_ptr);

  void_ptr++;
  void_ptr++;
  void_ptr++;
  printf("%p, %lld\n", void_ptr, (long long)void_ptr);

  // invalid argument type 'void *' to unary expression
  // 주소 값을 음수로 만든다는 것은 의미가 없다.
  // 주소값이라는 특징 때문에 되는 연산이 있고 안 되는 연산이 있다.
  // printf("%d\n", -void_ptr);

  int arr[10];
  int *arr_ptr1 = &arr[3], *arr_ptr2 = &arr[5];

  // 포인터의 더하기 연산은 되지 않는다!
  // int j = arr_ptr2 + arr_ptr1;

  // 뻬기는 된다.
  // 메모리는 1차원으로 늘어져 있기 때문에 주소 간의 거리를 구할 수 있는 것이다.
  int i = arr_ptr2 - arr_ptr1;

  // 주소의 차이는 8인데, i는 2가 나온다.
  // 자료형을 기준으로 몇 칸 차이가 나는 것인지 나오는 것이다.
  // 포인터의 빼기는 주어진 자료형의 사이즈 만큼 몇 칸 건너가 있는가 즉, 인덱스간 몇 칸 차이인가
  printf("%lld %lld %d \n", (long long)arr_ptr1, (long long)arr_ptr2, i);
}