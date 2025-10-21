// 퀴즈 3번
// data 배열의 각 요소에 저장된 값 중에서 가장 큰 값을 찾는 코드를 작성해 보세요.

#include <stdio.h>

int main(void)
{
  short data[9] = {4, 6, 9, 8, 7, 2, 5, 1, 3};
  short max = data[0];

  for (int i = 0; i < 9; i = i + 1)
  {
    if (max < data[i])
    {
      max = data[i];
    }
  }

  printf("배열의 요소 중 가장 큰 값: %d\n", max);

  return 0;
}