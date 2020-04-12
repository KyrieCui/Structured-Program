/*add all the positive integers that satisfy the
following conditions:
1. the integer is under 1000.
2. the integer is multiple of 3
3. the integer is not multiple of 5*/
#include <stdio.h>
int main()
{
	int n,sum;
	n=0;
	sum=0;
	while(n<=1000){
		n++;
		while(n%3==0){
			sum=sum+n;
			n++;
		}
		if(n%5==0)
			continue;
		
	}
	printf("the sum is %d\n",sum);
	return 0;
}



