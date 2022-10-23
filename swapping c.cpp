#include<stdio.h>
int main()
{
	int a,b;
	printf("enter 2 numbers:");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("values after interchange a=%d and b=%d",a,b);
	return 0;
}
