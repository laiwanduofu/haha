#include <stdio.h>
#include <string.h>
int find (int(*arr)[4],int*x,int*y,int key)
{
  int col=3;
  int row=0;
  while(row<4 && col>=0)
  {
    if(arr[row][col]==key)
    {
      printf("find it\n");
      *x=row;
      *y=col;
      return 0;
    }
    if(arr[row][col]>key)
    {
      col--;
    }
    if(arr[row][col]<key)
    {
      row++;
    }
  }
  printf("don't find it\n");
}
int main()
{
  int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
  int x=-1; int y=-1;int key=16;
  find(arr,&x,&y, key);
  printf("%d %d",x,y);
  
  return 0;
}
