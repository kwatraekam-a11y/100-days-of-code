/* Day 79 - Q129 */
#include <stdio.h>

int main(void)
{
  FILE * fp = fopen("numbers.txt", "r");
  if (!fp)
  {
    puts("Error opening numbers.txt.");
    return 1;
  }
  long long sum = 0;
  int x;
  int count = 0;
  while (fscanf(fp, "%d", &x) == 1)
  {
    sum += x;
    count++;
  }

  fclose(fp);
  printf("Sum: %lld\n", sum);
  if (count)
    printf("Average: %.2f\n", ((double) sum) / count);
  else
    printf("Average: 0.00\n");
  return 0;
}


