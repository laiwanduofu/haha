#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  while(1){
    printf("[lipi@localhost]$ ");
    fflush(stdout);
    char tmp[1024]={0};
    scanf("%[^\n]%*c",tmp);
    printf("[%s]\n",tmp);
    char*ptr=tmp;
    int argc=0;
    char*argv[32]={NULL};
    while(*ptr!='\0'){
         if(!isspace(*ptr)){
          argv[argc]=ptr;
          argc++;
          while(!isspace(*ptr)&&*ptr!='\0'){
            ptr++;
            *ptr='\0';
            ptr++;
          continue;
         }
         ptr++;
    }
         argv[argc]={NULL};
         if(!strcmp(argv[0],"cd")){
           chdir(argv[1]);
           continue; 
         }
    for(int i=0;i<agrc;i++){
      printf("argv[%d]=[%s]\n",i,argv[i]);
    }
    int pid=fork();
    if(pid==0){

      execvp(argv[0],argv);
      exit(0);
    }
    wait(NULL);
  }
  return 0;
}
