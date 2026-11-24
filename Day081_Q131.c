/* Day 81 - Q131 */
#include <stdio.h>

int main(void)
{
  enum Day
  {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
  };
  const char *n[] = {"SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY"};
  for (int i = SUNDAY; i <= SATURDAY; i++)
    printf("%s = %d\n", n[i], i);

  return 0;
}


