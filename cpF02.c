#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
const char* mystrstr(const char*arr1,const char*arr2)
{
  assert(arr1!=NULL&&arr2!=NULL);
  
    const char*ret=arr1;
    const char*ret2=arr2;
    const char*ll=ret;
    while(*ll)
    {
      while(*ret &&(*ret2)&&(*ret) ==(*ret2))
    {
      ret++;
      ret2++;
    }
    if(*ret=='\0')
    {
      return NULL;
    }
    if(*ret2=='\0')
    {
      return ll;
    }
    ll++;
  }
  return NULL;
}
char*mystrcmp(const char*arr1,const char*arr2)
{
  assert(arr1!=NULL&&arr2!=NULL);
  while(*arr1==*arr2)
  {
    if(*arr1=='\0');
    {
      printf("the same");
    }
    arr1++;
    arr2++;
  }
  if(*arr1>*arr2)
  {
    printf("%s",arr1);
  }
  else{
    printf("%s",arr2);
  }
}
int*mystrncmp(const char*arr1,const char*arr2,int n)
{
  assert(arr1!=NULL&&arr2!=NULL);
  int diff=0;
  int count=0;
  while(count<n &&((diff=(*arr1- *arr2))==0)&& *arr1!='\0')
  {
    arr1++;
    arr2++;
    count++;
  }
  return diff;
  

}
int main()
{
  char arr1[]="lipi6666";
  char arr2[]="6666"; 
  int n=2;
  //const char*p= mystrstr(arr1,arr2);
  mystrcmp(arr1,arr2);
int a=  mystrncmp(arr1,arr2,n);
printf("%d",a);
 //printf("%s\n",p);
  return 0;
}
