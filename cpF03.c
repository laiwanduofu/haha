#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
void*mymemrcpy(void*arr,const void*arr1,int count)
{
  assert(arr!=NULL&&arr1!=NULL);
  void*ret=arr;
  while(count--)
  {
    *((char*)arr)=*((char*)arr1);
    ((char*)arr)++;
   ((char*)arr1)++;
  }
  return ret;
}
void*mymmove(void*arr,const void*arr1,int count){
  assert(arr!=NULL&&arr1!=NULL);
  if(arr>arr1){
    while(count--)
    {
     *((char*)arr+count)++ = *((char*)arr1+count)++;
    }
  }
  else{
    while(count--)
    {
      *(char*)arr=*(char*)arr1;
     ((char*)arr)++;
      ((char*)arr1)++;
    }
  }
}
int main()
{
  char arr[]="hahahhaha";
  char arr1[]="suibian";
  int count=4;
  mymemrcpy(arr,arr1,count);
  mymmove(arr,arr1,count);
  printf("%p",arr);
  return 0;
}
