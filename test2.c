#include <stdio.h>
#define STR 10

void main()
{
  for(int i=0;i<STR;i++)
  {
    if(i%2==0)
    printf("%d\n",i);
    else 
    printf("%d\n",i*i);
  }
  printf("Sorry,I have a short memory\n");
}
