/* Day 96 - Q146 */
#include <stdio.h>

typedef struct 
{
  int day;
  int month;
  int year;
} Date;
typedef struct 
{
  char name[50];
  int id;
  Date joining;
} Employee;
int main(void)
{
  Employee e;
  scanf("%49s %d %d %d %d", e.name, &e.id, &e.joining.day, &e.joining.month, &e.joining.year);
  printf("Name: %s\nID: %d\nJoining Date: %02d/%02d/%04d\n", e.name, e.id, e.joining.day, e.joining.month, e.joining.year);
  return 0;
}


