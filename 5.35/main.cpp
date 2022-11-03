#include <stdio.h>
#include <stdlib.h>

int f(int n)
{
    if(n==1 || n==2)
        return 1;
    else
        return f(n-1)+f(n-2);
}
int main()
{
    int a=0,sum;
    printf("請輸入正整數Ｎ:\n");
    scanf("%d",&a);
    for(int i=a;i>0;i--)
    {
        sum=f(i);
        printf("%d\n",sum);
    }
}
