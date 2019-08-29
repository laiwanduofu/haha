#include <stdio.h>
#include <string.h>
#include  <stdlib.h>
int part(int*arr,int left,int right)
{
  int tmp=arr[left];
  while(left<right)
  {
     while(left<right&&arr[right]>=tmp)
    {
      right--;
    }
    if(left<right&&arr[right]<tmp)
    {
      arr[left]=arr[right];
    }
    else{
      break;
    }
    while(left>right&&arr[left]>=tmp)
    {
      arr[right]=arr[left];
    }
    if(left>right&&arr[left]<tmp)
    {
      left++;
    }
    else{
      break;
    }
  }
  arr[left]=tmp;
  return left;
}
int find(int*arr,int len)
{
  int mid=len/2;
  int right=len-1;
  int left=0;
  int par=part(arr,left,right);
  int result=0;
  while(mid!=par)
  {
    if(mid>par)
    {
      left=mid+1;
    }
    if(mid<par)
    {
      right=mid-1;
    }
  }
  result=arr[mid];
  if(!panduan(arr,result,len) 
  {
    return 0;
  }
  return result;
}
int panduan (int*arr,int val,int len)
{
  int i=0;
  int count=0;
  for(i=0;i<len;i++)
  {
    if(arr[i]==val)
    {
      count++;
    }
  }
  if(count<len/2)
  {
    return 0;
  }
  return 1;
}
int main()
{
  int arr[]={5,3,4,9,7,14,4};
  int k=0; int len=sizeof(arr)/sizeof(arr[0]);
 int ret= find(arr,len);
  printf("%d",ret);
  return 0;
}
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

