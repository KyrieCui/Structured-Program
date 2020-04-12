/*reads a positive integer n, and calls the
function Fac to compute the factorial number of n*/
#include <stdio.h>
int Fac(int x);//function prototype
int main()
{
	int n,value;
	printf("Please enter a positive integer: ");
	scanf("%d",&n);//enter a integer

	value=Fac(n);
	printf("The factorial number of %d is %d\n",n,value);

	return 0;
}
int Fac(int x)//define function
{
	int m;
	if(x==1)//base case
	return 1;
	
	m=x*Fac(x-1);//Recursive step
	return m;
}
