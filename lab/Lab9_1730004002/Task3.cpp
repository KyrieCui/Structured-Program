/*reads a positive integer, and call the compute the 2n.*/
#include <stdio.h>
int compute(int n);//function prototype
int main()
{
	int x,num;
	printf("Please enter a positive integer: ");
	scanf("%d",&x);//enter a integer
	num=compute(x);

	printf("The result is %d\n",num);
	return 0;
}
int compute(int n)
{
	int result;
	if(n==0) //base case
		return 1;

	result=2*compute(n-1);//resusion step
	return result;
}
