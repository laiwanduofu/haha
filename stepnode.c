#include <stdio.h>
#include <unistd.h>
int main()
{
  int i=0;  int j=0;
  char arr[27]={0};
  char arr1[4]={'/','-','\\','|'};
  for(i=0;i<=25;i++)
  {
    printf("[%-25s][%d%][%c]\r",arr,j,arr1[i%4]);
    fflush(stdout);
    arr[i]='#';
    j+=4;
    usleep(100000);
  }
  printf("\n");
  return 0;
}
