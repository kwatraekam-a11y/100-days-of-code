/* Day 69 - Q119 */
#include <stdio.h>

int main(void)
{
  int n;
  int a[1000];
  int seen[1001] = {0};
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
    if (((a[i] >= 0) && (a[i] <= 1000)) && seen[a[i]])
    {
      printf("%d\n", a[i]);
      return 0;
    }
    if ((a[i] >= 0) && (a[i] <= 1000))
      seen[a[i]] = 1;
  }

  return 0;
}


