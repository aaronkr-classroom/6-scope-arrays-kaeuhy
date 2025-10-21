#include <stdio.h>
#include <stdlib.h> // rand(), srand()
#include <time.h>   // time()

int rand_num; // 전역 변수

void gameInit(void)
{
  srand(time(0)); // 1970년 1월 1일 0:00시부터 현재까지 ms 값
  rand_num = rand() % 10 + 1;
}

void gamePlay(void)
{
  int guess = 0, count = 0, allowed = 5; // 5개 추측만 가능

  printf("Guess the number (1-10): ");

  do
  {
    scanf("%d", &guess);
    count++;

    if (guess == rand_num)
    {
      printf("정답! Good! You Win!");
      break;
    }
    else if (guess < rand_num)
    {
      printf("Too Low! Try Higher!");
    }
    else if (guess > rand_num)
    {
      printf("Too High! Try Lower!");
    }
  } while (count != allowed);

  if (count > allowed)
  {
    printf("Too many guesses! You Lose!");
  }
}

int main(void)
{
  gameInit();
  gamePlay();
  return 0;
}