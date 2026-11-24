/* Day 60 - Q110 */
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
  for (int i = 0; i <= (n - k); i++)
  {
    int m = a[i];
    for (int j = i + 1; j < (i + k); j++)
      if (a[j] > m)
      m = a[j];

    if (i)
      printf(" ");
    printf("%d", m);
  }

  printf("\n");
  return 0;
}


