#include <stdio.h>
#include "log.h"
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define  PO(A,B) A##e##B



int main(void) {
    int fpid;//fpid表示fork函数返回的值
    int count=0;
    fpid=fork();
    if(fpid<0)
          printf("error in fork!");
    else if(fpid==0)
      {
          printf("我是子进程,id:%d\n",getpid());
          count++;
      }
    else
      {
          printf("我是父进程,id:%d\n",getpid());
          count++;
      }
      printf("这是我改变后的main.c   lll\n");
      printf("统计结果是:%d\n",count);
      exit(0);
    
      
    return 0;
}
