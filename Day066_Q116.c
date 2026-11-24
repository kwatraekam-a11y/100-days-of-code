/* Day 66 - Q116 */
#include <stdio.h>

int main(void)
{
  int n;
  int target;
  int a[100];
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  scanf("%d", &target);
  for (int i = 0; i < (n - 1); i++)
    for (int j = i + 1; j < n; j++)
    if ((a[i] + a[j]) == target)
  {
    printf("%d %d\n", i, j);
    return 0;
  }


  puts("-1 -1");
  return 0;
}


