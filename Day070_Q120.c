/* Day 70 - Q120 */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char s[1000];
  fgets(s, sizeof(s), stdin);
  int newword = 1;
  for (int i = 0; s[i]; i++)
  {
    if (isalpha((unsigned char) s[i]))
    {
      if (newword)
        s[i] = toupper((unsigned char) s[i]);
      else
        s[i] = tolower((unsigned char) s[i]);
      newword = 0;
    }
    else
      if (isspace((unsigned char) s[i]))
      newword = 1;
  }

  printf("%s", s);
  return 0;
}


