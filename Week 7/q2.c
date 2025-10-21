// 퀴즈 2번
// data 배열의 짝수 번 요소에 저장된 값을 합산하는 코드를 작성해 보세요.

#include <stdio.h>

int main(void)
{
  short data[9] = {4, 6, 9, 8, 7, 2, 5, 1, 3};

  int sum = 0;

  for (int i = 0; i < 9; i = i + 2)
  {
    sum = sum + data[i];
  }

  printf("짝수 번째 요소들의 합: %d\n", sum);

  return 0;
}