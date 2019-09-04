#include <stdio.h>
#include <string.h>
#include <math.h>
int largest(int*arr,int len)
{
  int i=0;
  int j=len-1;
  int largest=0;
  while(i<j)
  {
    largest= largest<((arr[i]<arr[j]?arr[i]:arr[j])*(j-i))?
    ((arr[i]<arr[j]?arr[i]:arr[j])*(j-i)):largest;
    if(arr[i]<arr[j])
    {
      i++;
    }
    else{
      j--;
    }
  }
  return largest;
}
int main()
{
  int arr[]={1,8,6,2,5,4,8,3,7};
  int len =sizeof(arr)/sizeof(arr[0]);
  int ret= largest(arr,len);
  printf("%d\n",ret);
  return 0;
}
