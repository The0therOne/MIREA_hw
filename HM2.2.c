#include <stdio.h>
#include <math.h>

int main()
{
      int x,y,result;
      printf("Enter number:");
      scanf("%d",&x);
      printf("Enter power:");
      scanf("%d",&y);
      result = powf(x,y);
      printf("%d in power %d = %d",x,y,result);
      return 0;
}