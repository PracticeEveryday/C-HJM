#include <stdio.h>

int main()
{
  // name이라는 포인터의 배열이 담긴다.
  // k가 저장된 위치, l가 저장된 위치, p가 저장된 위치 ... 가 저장된다.

  // 이 name은 선언 시 사이즈를 지정해주지 않았기 때문에 name만으로는 배열의 사이즈를 알수가 없다.
  // 문자열의 경우 특히 더 알기 어렵다!!
  char *name[] = {"kim", "lee", "park", "sone", "oh"};

  const int name_size = sizeof(name) / sizeof(char *);

  for (int i = 0; i < name_size; i++)
  {
    printf("%s at %llu\n", name[i], (unsigned long long)name[i]);
  }
  printf("\n");

  char aname[][15] = {"kim", "lee", "park", "shin", "gwak"};

  // char[15] <- char 15개 짜리 배열이다.
  // 사이즈를 나누어 알 수 있다!
  // 15개씩 정해진 사이즈에 따라서 배정된다.
  const aname_size = sizeof(aname) / sizeof(char[15]);

  for (int i = 0; i < aname_size; i++)
  {
    printf("%s at %llu\n", aname[i], (unsigned long long)&aname[i]);
  }
  printf("\n");

  return 0;
}