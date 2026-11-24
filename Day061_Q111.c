/* Day 61 - Q111 */
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
    int x = 0;
    for (int j = i; j < (i + k); j++)
      if (a[j] < 0)
    {
      x = a[j];
      break;
    }

    if (i)
      printf(" ");
    printf("%d", x);
  }

  printf("\n");
  return 0;
}


