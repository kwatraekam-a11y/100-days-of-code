/* Day 64 - Q114 */
#include <stdio.h>
#include <string.h>

int main(void)
{
  char s[1000];
  int last[256];
  int start = 0;
  int best = 0;
  for (int i = 0; i < 256; i++)
    last[i] = -1;

  fgets(s, sizeof(s), stdin);
  s[strcspn(s, "\n")] = 0;
  for (int i = 0; s[i]; i++)
  {
    unsigned char c = s[i];
    if (last[c] >= start)
      start = last[c] + 1;
    last[c] = i;
    int len = (i - start) + 1;
    if (len > best)
      best = len;
  }

  printf("%d\n", best);
  return 0;
}


