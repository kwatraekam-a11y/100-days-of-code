/* Day 62 - Q112 */
#include <stdio.h>

int main(void)
{
  int n;
  int a[100];
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  int cur = a[0];
  int best = a[0];
  for (int i = 1; i < n; i++)
  {
    cur = ((cur + a[i]) > a[i]) ? (cur + a[i]) : (a[i]);
    if (cur > best)
      best = cur;
  }

  printf("%d\n", best);
  return 0;
}


