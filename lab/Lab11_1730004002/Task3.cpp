/*read a sequence of data and then output the
data in the reverse order*/
#include<stdio.h>
#include <stdlib.h>
int main()
{
	int a,n,i;
	int *m;
	printf("Please enter how many numbers you want to enter: ");
	scanf("%d",&a);//enter how many numbers you want te enter
	m=(int*)malloc(a*sizeof(int));//
	printf("Please enter %d numbers:\n",a);
	for(n=0;n<a;n++)
	{
		scanf("%d",&m[n]);//enter the numbers
}
	for(i=a-1;i>=0;i--)
		printf("%d\n",m[i]);
		free(m);
	
	return 0;
	}
