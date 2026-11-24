/* Day 90 - Q140 */
#include <stdio.h>
#include <string.h>

enum Gender
{
  MALE,
  FEMALE,
  OTHER
};
typedef struct 
{
  char name[50];
  enum Gender gender;
} Person;
int main(void)
{
  Person p;
  int g;
  scanf("%49s %d", p.name, &g);
  p.gender = (enum Gender) g;
  printf("Name: %s\nGender: ", p.name);
  if (p.gender == MALE)
    puts("Male");
  else
    if (p.gender == FEMALE)
    puts("Female");
  else
    puts("Other");
  return 0;
}


