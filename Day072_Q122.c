/* Day 72 - Q122 */
#include <stdio.h>

int main(void)
{
  FILE * fp = fopen("info.txt", "r");
  char line[500];
  if (fp == NULL)
  {
    puts("Error opening file.");
    return 1;
  }
  while (fgets(line, sizeof(line), fp) != NULL)
    printf("%s", line);

  fclose(fp);
  return 0;
}


