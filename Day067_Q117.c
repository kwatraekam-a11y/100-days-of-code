/* Day 67 - Q117 */
#include <stdio.h>

int main(void)
{
  int m;
  int n;
  int a[100];
  int b[100];
  int i = 0;
  int j = 0;
  scanf("%d", &m);
  for (int x = 0; x < m; x++)
    scanf("%d", &a[x]);

  scanf("%d", &n);
  for (int x = 0; x < n; x++)
    scanf("%d", &b[x]);

  int first = 1;
  while ((i < m) || (j < n))
  {
    int v;
    if ((j == n) || ((i < m) && (a[i] <= b[j])))
      v = a[i++];
    else
      v = b[j++];
    if (!first)
      printf(" ");
    printf("%d", v);
    first = 0;
  }

  printf("\n");
  return 0;
}


