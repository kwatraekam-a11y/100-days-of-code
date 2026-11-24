/* Day 80 - Q130 */
#include <stdio.h>

typedef struct 
{
  char name[50];
  int roll;
  float marks;
} Student;
int main(void)
{
  int n;
  scanf("%d", &n);
  FILE * fp = fopen("students.txt", "w");
  if (!fp)
    return 1;
  Student s;
  for (int i = 0; i < n; i++)
  {
    scanf("%49s %d %f", s.name, &s.roll, &s.marks);
    fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);
  }

  fclose(fp);
  fp = fopen("students.txt", "r");
  while (fscanf(fp, "%49s %d %f", s.name, &s.roll, &s.marks) == 3)
    printf("Name: %s Roll: %d Marks: %.2f\n", s.name, s.roll, s.marks);

  fclose(fp);
  return 0;
}


