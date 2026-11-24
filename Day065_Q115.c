/* Day 65 - Q115 */
#include <stdio.h>
#include <string.h>

int main(void)
{
  char s[500];
  char t[500];
  int f[26] = {0};
  scanf("%499s %499s", s, t);
  if (strlen(s) != strlen(t))
  {
    puts("Not Anagram");
    return 0;
  }
  for (int i = 0; s[i]; i++)
  {
    f[s[i] - 'a']++;
    f[t[i] - 'a']--;
  }

  for (int i = 0; i < 26; i++)
    if (f[i])
  {
    puts("Not Anagram");
    return 0;
  }

  puts("Anagram");
  return 0;
}


