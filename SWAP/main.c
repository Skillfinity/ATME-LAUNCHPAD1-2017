#include <stdio.h>
int main()
{
  int x,y;
  printf("enter two numbers\n");
  scanf("%d %d",&x,&y);
  x = x + y;
  y = x - y;
  x = x - y;
  printf("After Swapping: x = %d, y = %d\n", x, y);

  return 0;
}
