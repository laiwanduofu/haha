#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int add(int a,int b)
{
  return a+b;
}
int jian(int a,int b)
{
  return a-b;
}
int puls(int a,int b)
{
  return a*b;
}
int chu(int a,int b)
{
  return a/b;
}
int main()
{
  int a =0;
  int x=0;
  int y=0;
  int ret=0;
  int (*input[5])(int,int)={0,add,jian,puls,chu};
  do {
  printf("please choose model\n");
  scanf("%d",&a);
  if(a>=1&& a<=4)
  {
    printf("please chose two number\n");
    scanf("%d %d",&x,&y);
    ret=(*input[a])(x,y);
    printf("%d\n",ret);
  }
  }while(a);
   return 0;
}
