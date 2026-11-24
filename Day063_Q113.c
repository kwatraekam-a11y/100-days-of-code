/* Day 63 - Q113 */
#include <stdio.h>

int main(void)
{
  int n;
  int k;
  int a[100];
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  scanf("%d", &k);
  for (int i = 0; i < (n - 1); i++)
    for (int j = i + 1; j < n; j++)
    if (a[i] > a[j])
  {
    int t = a[i];
    a[i] = a[j];
    a[j] = t;
  }


  if ((k >= 1) && (k <= n))
    printf("%d\n", a[k - 1]);
  return 0;
}


