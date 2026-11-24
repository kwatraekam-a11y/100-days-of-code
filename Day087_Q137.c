/* Day 87 - Q137 */
#include <stdio.h>

int main(void)
{
  enum Role
  {
    ADMIN,
    USER,
    GUEST
  };
  int r;
  scanf("%d", &r);
  switch ((enum Role) r)
  {
    case ADMIN:
      puts("Welcome, Admin");
      break;

    case USER:
      puts("Welcome, User");
      break;

    case GUEST:
      puts("Welcome, Guest");
      break;

    default:
      puts("Invalid role");

  }

  return 0;
}


