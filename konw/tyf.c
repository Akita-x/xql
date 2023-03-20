#include <stdio.h>
#include <string.h>

typedef char ARRCH20[20];
typedef char * ARRCH;
typedef int (*FUNC) (int,int);

char str[20] = "abcdefghiklenoqrest";

int max(int a,int b)
{
    return a > b? a:b;
}

int main()
{
    ARRCH20 A;
    ARRCH B = str;
    FUNC C = max;
    memset(A, 0, sizeof(A));
    strcat(A,"abcdefghijklnmopqrs");

    printf("A = %lu\n",sizeof(A));
    printf("A = %s\n",A);
    printf("B = %lu\n",sizeof(B));
    printf("B = %s\n",B);

    printf("max = %d\n",(*C)(10,12));
    printf("max = %d",C(15,10));
    printf("进行了bug修复\n");
    return 0;
}
