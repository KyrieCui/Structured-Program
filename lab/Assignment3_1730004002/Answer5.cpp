/*There is a sequence of numbers a1, a2, a3, бн, an where an = 3an-1+2, a1 = 2. Please write a program to find a16*/
#include <stdio.h>
int func(int n);
int main()
{
	int n=16, a;
	a=func(n);
	printf("a16 is %d\n",a);
	return 0;
}
int func(int n)
{
	int a;
	if(n==2)
		return 8;
	a=3*func(n-1)+2;
	return a;
}