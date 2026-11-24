/* Day 83 - Q133 */
#include <stdio.h>

int main(void)
{
  enum Month
  {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
  };
  const char *n[] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
  for (int m = JANUARY; m <= DECEMBER; m++)
  {
    int d;
    if (m == FEBRUARY)
      d = 28;
    else
      if ((((m == APRIL) || (m == JUNE)) || (m == SEPTEMBER)) || (m == NOVEMBER))
      d = 30;
    else
      d = 31;
    printf("%s: %d\n", n[m], d);
  }

  return 0;
}


