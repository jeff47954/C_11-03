#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int m, n, a, b;
    printf("块ㄢ计ㄓ―程そ计");
    scanf("%d%d",&a,&b);
    m=a;
    n=b;
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else {
            b=b-a;}

    }
    printf("程そ计:%d\n",m*n/a);

}
