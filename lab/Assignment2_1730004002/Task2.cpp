/*decide if an input natural number is a prime number.*/
#include <stdio.h>
int main(){
	int m,n,x;
	x=0;
	printf("Please enter an natural number: ");
	scanf("%d",&m);
	if(m>1){
	for(n=2;n<m-1;n++){
		if(m%n==0)
			x++;
			}
	
	if(x==0)
		printf("%d is a primer number\n",m);
	
	else
		printf("%d is not a primer number\n",m);
	}
	else
		printf("%d isn't a primer number\n",m);
	

	return 0;
}
	


