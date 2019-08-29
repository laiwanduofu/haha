#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int sum()
{
  int count=0;
  int i=1;
  for( ;i<=100;i++ )
  {
    count+=i;
  }
  return count;
}
int main()
{
  sum();
  int c=sum();
  printf("%d",c);
  printf("hahahhahah");
  printf("hahhahhahahahl");
  return 0;
}
