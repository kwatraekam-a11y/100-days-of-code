/* Day 78 - Q128 */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char filename[200];
  scanf("%199s", filename);
  FILE * fp = fopen(filename, "r");
  if (!fp)
  {
    puts("Error opening file.");
    return 1;
  }
  int c;
  int v = 0;
  int con = 0;
  while ((c = fgetc(fp)) != EOF)
  {
    if (isalpha((unsigned char) c))
    {
      c = tolower((unsigned char) c);
      if (((((c == 'a') || (c == 'e')) || (c == 'i')) || (c == 'o')) || (c == 'u'))
        v++;
      else
        con++;
    }
  }

  printf("Vowels: %d\nConsonants: %d\n", v, con);
  fclose(fp);
  return 0;
}


