#include <stdio.h>
/*
#define IS_VALID(x)  ((50<=x) && (x<=200))
#define VALID_MSG    "Good value.\n"
#define INVALID_MSG  "Bad value.\n"

int main()
{
  int val;

  printf("Enter a value: ");
  scanf("%d", &val);
  if (IS_VALID(val))
    printf(VALID_MSG);
  else
    printf(INVALID_MSG);

  return 0;
}*/

int main()
{
  int val;

  printf("Enter a value: ");
  scanf("%d", &val);
  if (((50<=val) && (val<=200)))
    printf("Good value.\n");
  else
    printf("Bad value.\n");

  return 0;
}