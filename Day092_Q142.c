/* Day 92 - Q142 */
#include <stdio.h>

typedef struct 
{
  char name[50];
  int roll_no;
  float marks;
} Student;
int main(void)
{
  Student s[5];
  for (int i = 0; i < 5; i++)
    scanf("%49s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);

  for (int i = 0; i < 5; i++)
    printf("%s %d %.2f\n", s[i].name, s[i].roll_no, s[i].marks);

  return 0;
}


