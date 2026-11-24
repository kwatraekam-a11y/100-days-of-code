/* Day 77 - Q127 */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
  FILE * in = fopen("input.txt", "r");
  if (!in)
  {
    puts("Error opening input.txt.");
    return 1;
  }
  FILE * out = fopen("output.txt", "w");
  if (!out)
  {
    fclose(in);
    puts("Error opening output.txt.");
    return 1;
  }
  int c;
  while ((c = fgetc(in)) != EOF)
    fputc(toupper((unsigned char) c), out);

  fclose(in);
  fclose(out);
  puts("Converted text written to output.txt.");
  return 0;
}


