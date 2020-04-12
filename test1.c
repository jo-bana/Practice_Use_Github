#include <stdio.h>
#define NUM 10

void main(void)
{
  int a,b;
  for(a=1,b=1;a<NUM;a++)
  {
    printf("2%d*2%d=2%d",a,b,a*b);
  }
}
