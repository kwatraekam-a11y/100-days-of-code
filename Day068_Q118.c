/* Day 68 - Q118 */
#include <stdio.h>

int main(void)
{
  int n;
  int x;
  long long sum = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &x);
    sum += x;
  }

  long long expected = (((long long) n) * (n + 1)) / 2;
  printf("%lld\n", expected - sum);
  return 0;
}


