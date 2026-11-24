/* Day 74 - Q124 */
#include <stdio.h>

int main(void)
{
  char src[200];
  char dst[200];
  scanf("%199s %199s", src, dst);
  FILE * in = fopen(src, "r");
  if (!in)
  {
    puts("Error opening source file.");
    return 1;
  }
  FILE * out = fopen(dst, "w");
  if (!out)
  {
    fclose(in);
    puts("Error opening destination file.");
    return 1;
  }
  int c;
  while ((c = fgetc(in)) != EOF)
    fputc(c, out);

  fclose(in);
  fclose(out);
  puts("File copied successfully.");
  return 0;
}


