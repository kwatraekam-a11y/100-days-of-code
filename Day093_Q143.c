/* Day 93 - Q143 */
#include <stdio.h>

typedef struct 
{
  char name[50];
  int roll_no;
  float marks;
} Student;
int main(void)
{
  int n;
  Student s[100];
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    scanf("%49s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);

  int top = 0;
  for (int i = 1; i < n; i++)
    if (s[i].marks > s[top].marks)
    top = i;

  printf("%s %d %.2f\n", s[top].name, s[top].roll_no, s[top].marks);
  return 0;
}


