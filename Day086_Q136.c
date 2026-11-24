/* Day 86 - Q136 */
#include <stdio.h>

int main(void)
{
  enum Choice
  {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
  };
  int ch;
  double a;
  double b;
  scanf("%d %lf %lf", &ch, &a, &b);
  switch ((enum Choice) ch)
  {
    case ADD:
      printf("%.2f\n", a + b);
      break;

    case SUBTRACT:
      printf("%.2f\n", a - b);
      break;

    case MULTIPLY:
      printf("%.2f\n", a * b);
      break;

    default:
      puts("Invalid choice");

  }

  return 0;
}


