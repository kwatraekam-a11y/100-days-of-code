/* Day 76 - Q126 */
#include <stdio.h>

int main(void)
{
  char filename[200];
  char line[500];
  scanf("%199s", filename);
  FILE * fp = fopen(filename, "r");
  if (fp == NULL)
  {
    puts("Error: File does not exist!");
    return 0;
  }
  puts("File opened successfully.");
  while (fgets(line, sizeof(line), fp))
    printf("%s", line);

  fclose(fp);
  return 0;
}


