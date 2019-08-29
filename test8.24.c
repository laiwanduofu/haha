#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void find(int*arr,int len,int key,int *num1,int*num2)
{
  int left=0;
  int right=len-1;
  int sum=arr[left]+arr[right];
  while(left<right)
  {
    if(sum<key)
    {
      left++;
    }
    if(sum>key)
    {
      right--;
    }
    else{
     * num1=left;
     * num2=right;
     break;

    }
  }
}
int main()
{
  int arr[]={2,3,8,13,15};
  int len=sizeof(arr)/sizeof(arr[0]);
  int i=-1;int j=-1;
  find(arr,len,11,&i,&j);
  printf("%d %d",i,j);
  system("pause");
  return 0;
}

