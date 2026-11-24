/* Day 91 - Q141 */
#include <stdio.h>

typedef struct 
{
  char name[50];
  int roll_no;
  float marks;
} Student;
int main(void)
{
  Student s;
  scanf("%49s %d %f", s.name, &s.roll_no, &s.marks);
  printf("Name: %s\nRoll No: %d\nMarks: %.2f\n", s.name, s.roll_no, s.marks);
  return 0;
}


