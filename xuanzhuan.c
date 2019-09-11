#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int shunxu(int*arr ,int left,int right){
  int min=arr[left];
  for(int i=0;i<right;i++){
        if(arr[i]<min)
        {
          min=arr[i];
        }
  }
  return min;}
int xuanzhuan(int*arr,int len){
  int left=0;
  int right=len-1;
  int mid=left;
  while(arr[left]>=arr[right])
  {
    if(right-left==1)
    {
      arr[right]=arr[mid];
      break;
    }
    int mid=(right+left)/2;
    if(arr[left]==arr[right]&&arr[left]==arr[mid])
    {
     return  shunxu( arr,left,right);
     
    }
    else if(arr[left]<=arr[mid]){
     arr[left]=arr[mid];
    }
    if(arr[right]>=arr[mid])
    {
      arr[right]=arr[mid];
    }
  }
  return arr[mid];
}
int main()
{
  int arr[]={1,0,1,1,1};
  int len=sizeof(arr)/sizeof(arr[0]);
  int ret = xuanzhuan(arr,len);
  printf("%d\n",ret);
  return 0;
}
