/* Day 95 - Q145 */
#include <stdio.h>

typedef struct 
{
  char name[50];
  int roll_no;
  float marks;
} Student;
Student topStudent(Student s[], int n)
{
  int top = 0;
  for (int i = 1; i < n; i++)
    if (s[i].marks > s[top].marks)
    top = i;

  return s[top];
}

int main(void)
{
  int n;
  Student s[100];
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    scanf("%49s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);

  Student t = topStudent(s, n);
  printf("%s %d %.2f\n", t.name, t.roll_no, t.marks);
  return 0;
}


