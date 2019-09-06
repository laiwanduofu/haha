#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  int w[5]={0,3,2,4,5};
  int v[5]={0,3,6,5,4};
  int ba=8;
  int dp[5][9]={{0}};
  for(int i=0;i<=4;i++)
  {
    for(int j=0;j<=ba;j++)
    {
      if(j<w[i])
      {
        dp[i][j]=dp[i-1][j];
      }
      else{
        dp[i][j]=dp[i-1][j]>(dp[i-1][j]>(dp[i-1][j-w[i]]+v[i])? dp[i-1][j]:
            dp[i-1][j-w[i]]+v[i]) ? dp[i-1][j]:(dp[i-1][j]>(dp[i-1][j-w[i]]+v[i])?dp[i-1][j]
          :dp[i-1][j-w[i]]+v[i]);
      }
    }
  }
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<9;j++)
    {
      printf("%d ",dp[i][j]);
    }
    printf("\n");
  }

  return 0;
}
