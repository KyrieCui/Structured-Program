/*calculate the number of digits in a positive integer and decide if this
positive integer is a perfect square.
*/
#include <stdio.h>
#include <math.h>
int main(){
	int m,n;
	float x;
	n=0;
	printf("Please enter a positive integer: ");
	scanf("%d",&m);
	x=(int)sqrt(m*1.0);
	if(x*x==m){
		printf("The integer is perfect square\n");
	}
	else{
		printf("The integer is not perfect square\n");
	}

	while(m!=0){
		m=m/10;
		n++;
	}
	printf("the digit of the integer is %d\n",n);
	
	

	return 0;
}