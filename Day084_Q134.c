/* Day 84 - Q134 */
#include <stdio.h>

int main(void)
{
  enum Status
  {
    SUCCESS,
    FAILURE,
    TIMEOUT
  };
  int x;
  scanf("%d", &x);
  switch ((enum Status) x)
  {
    case SUCCESS:
      puts("Operation successful");
      break;

    case FAILURE:
      puts("Operation failed");
      break;

    case TIMEOUT:
      puts("Operation timed out");
      break;

    default:
      puts("Invalid status");

  }

  return 0;
}


