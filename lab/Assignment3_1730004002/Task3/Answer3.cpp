/*calculate 2n1+2n2+2n3*/
#include <stdio.h>
#include "Power2.h"
int main()
{
	int n1,n2,n3,s1,s2,s3,result;
	printf("Please enter 3 integers: ");
	scanf("%d%d%d",&n1,&n2,&n3);//enter 3 integers
	s1=Power2(n1);//use the power2 function to calculate 
	s2=Power2(n2);
	s3=Power2(n3);
	result=s1+s2+s3;//add each s
	printf("The result is %d\n",result);//print out the result
	return 0;
}


