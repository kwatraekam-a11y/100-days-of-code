/* Day 82 - Q132 */
#include <stdio.h>

int main(void)
{
  enum Traffic
  {
    RED,
    YELLOW,
    GREEN
  };
  int x;
  scanf("%d", &x);
  switch ((enum Traffic) x)
  {
    case RED:
      puts("Stop");
      break;

    case YELLOW:
      puts("Wait");
      break;

    case GREEN:
      puts("Go");
      break;

    default:
      puts("Invalid");

  }

  return 0;
}


