#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int a,b,c;
   printf("輸入底數與指數：");
   scanf("%d%d",&a,&b);
   c=pow(a,b);
   printf("%d",c);
}
