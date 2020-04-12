/*calculate sum of the odd numbers from 1 to
100.*/
#include <stdio.h>
int main()
{
	int m,sum;
	m=0;
	sum=0;
	while(m<100){
			m++;
		if(m % 2 ==0)
			continue;
			sum=sum+m;
	}
	printf("the sum of odd numbers from 1 to 100 is %d\n",sum);

	return 0;
}

