/* Day 75 - Q125 */
#include <stdio.h>
#include <string.h>

int main(void)
{
  char filename[200];
  char text[1000];
  scanf("%199s", filename);
  getchar();
  fgets(text, sizeof(text), stdin);
  FILE * fp = fopen(filename, "a");
  if (!fp)
  {
    puts("Error opening file.");
    return 1;
  }
  fputs(text, fp);
  if (strchr(text, '\n') == NULL)
    fputc('\n', fp);
  fclose(fp);
  puts("Text appended successfully.");
  return 0;
}


