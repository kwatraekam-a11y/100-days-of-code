/* Day 94 - Q144 */
#include <stdio.h>

typedef struct 
{
  char name[50];
  int roll_no;
  float marks;
} Student;
void printStudent(Student s)
{
  printf("Name: %s\nRoll No: %d\nMarks: %.2f\n", s.name, s.roll_no, s.marks);
}

int main(void)
{
  Student s;
  scanf("%49s %d %f", s.name, &s.roll_no, &s.marks);
  printStudent(s);
  return 0;
}


