/* Day 71 - Q121 */
#include <stdio.h>

int main(void)
{
  char name[100];
  int age;
  fgets(name, sizeof(name), stdin);
  scanf("%d", &age);
  FILE * fp = fopen("info.txt", "w");
  if (fp == NULL)
  {
    puts("Error opening file.");
    return 1;
  }
  fprintf(fp, "Name: %s", name);
  fprintf(fp, "Age: %d\n", age);
  fclose(fp);
  puts("Data successfully saved to info.txt.");
  return 0;
}


