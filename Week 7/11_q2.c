#include <stdio.h>

int result; // 전역 변수

void Test()
{
  int result = 5;
  result++;
}

int main(void)
{

  Test();
  printf("result: %d", result);
  return 0;
}