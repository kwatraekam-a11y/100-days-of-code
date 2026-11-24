/* Day 73 - Q123 */
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
  long chars = 0;
  long words = 0;
  long lines = 0;
  int c;
  int inword = 0;
  int last = '\n';
  while ((c = fgetc(fp)) != EOF)
  {
    chars++;
    last = c;
    if (c == '\n')
      lines++;
    if (isspace(c))
      inword = 0;
    else
      if (!inword)
    {
      words++;
      inword = 1;
    }
  }

  if ((chars > 0) && (last != '\n'))
    lines++;
  printf("Characters: %ld\nWords: %ld\nLines: %ld\n", chars, words, lines);
  fclose(fp);
  return 0;
}


