/*Write a program to read a sequence of positive integers and sort
them in ascending order*/
#include <stdio.h>
int main()
{
	int integers[10];
	printf("Please enter a sequence of positive integers(the number of integers don't more than 10): ");
	int i;
	for(i=0;i<10;i++)
		scanf("%d",&integers[i]);/*input a sequence of positive integers*/

	int n,x,y,z;
	for(n=0;n<10-1;n++){
		for(x=0;x<10-1-n;x++){
			if(integers[x]>integers[x-1]){
				z=integers[x];
				integers[x]=integers[x-1];
				integers[x-1]=z;
			}
		}
	}
	for(n=0;n<10;n++){
		printf("%d ",integers[n]);
	}
	return 0;
}