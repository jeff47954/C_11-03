#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int m, n, a, b;
    printf("��J��ӼƨӨD�̤p������");
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
    printf("�̤p���]�Ƭ�:%d\n",m*n/a);

}
