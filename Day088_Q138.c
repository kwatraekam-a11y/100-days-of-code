/* Day 88 - Q138 */
#include <stdio.h>

int main(void)
{
  enum Level
  {
    LOW,
    MEDIUM,
    HIGH,
    CRITICAL
  };
  const char *n[] = {"LOW", "MEDIUM", "HIGH", "CRITICAL"};
  for (int i = LOW; i <= CRITICAL; i++)
    printf("%s = %d\n", n[i], i);

  return 0;
}


