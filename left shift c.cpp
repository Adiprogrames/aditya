/* C++ Program to demonstrate use of left shift
operator */
#include<stdio.h>
int main()
{
	// a = 5(00000101), b = 9(00001001)
	int a,b;
	scanf("%d%d",&a,&b);

	// The result is 00001010
	printf("a<<3 = %d\n", a<<3);
	
	// The result is 00010010
	printf("b<<3 = %d\n", b<<3);
	return 0;
}


