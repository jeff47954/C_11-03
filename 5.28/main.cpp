#include <iostream>
#include<stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char a;
	char caps='a';
	char b='A';
	char t='z';
	int flag;
	
	scanf("%c",&a);
	
	if(b<=a & a<caps){
		flag=1;
	}
	else if(caps<=a & a<=t){
		flag=2;
	}
	else{
		flag=0;
	}
	
	switch(flag){
		case 1:
			a+=32;
			printf("%c\n",a);
			break;
		case 2:
			a-=32;
			printf("%c\n",a);
			break;
		case 0:
			printf("erro\n");
			break;
	}
	return 0;
}
