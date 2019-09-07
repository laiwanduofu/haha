#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
char* mystrcpy(char*arr,const char*arr1)
{
  char*p=arr;
  while(*(arr1))
  {
   *arr=*arr1;
    arr++;
    arr1++;
  }
 *arr='\0';
  return p;
}
 unsigned int mystrlen(const char*arr)
{
 unsigned int count=0;
 assert(arr!=NULL);
  while(*arr)
  {
    count++;
    arr++;
  }
  return count;
}
char*mystrcat( char*arr,const char*arr1)
{
  char*p=arr;
  while(*arr)
  {
    arr++;
  }
  while(*arr++ = *arr1++);
   return p;
}
char*mystrncat(char*arr,const char*arr1,int n)
{
  
  char*p=arr;
  int count=0;
  assert(arr!=NULL&&arr1!=NULL);
  while(*arr)
  {
    arr++;
  }
  while(count<n)
  {
    *arr++ = *arr1++;
    count++;

  }
  return p;
}
int main()
{
  char arr[]="hahahahah";
  char arr1[]="cdbadeg";
  int n=3;
  //mystrcpy(arr,arr1);
  mystrlen(arr);
  printf("%s\n",arr);
  mystrcat(arr,arr1);
  printf("%s\n",arr);
  mystrncat(arr,arr1,n);
  printf("%s\n",arr);
  //printf("%d\n",mystrlen(arr));
  return 0;
}
