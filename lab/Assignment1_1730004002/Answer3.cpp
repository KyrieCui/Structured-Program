/*input a positive integer. If the integer is bigger than 999, then output the
message ¡°The input is too big¡±; otherwise, reverse the integer and output. For example, if
the input is 987, the output is 789. If input is 78, the output is 87.*/
#include <stdio.h>
int main()
{
	int n;
	printf("Please enter a positive integer: ");
	scanf("%d",&n);
	int x,y,z;
	if(n<10){
		printf("the output is %d",n);
	}
	else if(n<100){
		x=n/10;
		y=n-10*x;
		printf("output is %d\n",10*y+x);
	}
	else if(n<1000){
		x=n/100;
		y=(n-100*x)/10;
		z=n-100*x-10*y;
		printf("output is %d\n",100*z+10*y+x);
	}
	else{
		printf("The inpur is too big\n");
	}
	return 0;
}


