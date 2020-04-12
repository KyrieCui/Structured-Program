/*read a sequence of integers (assume that the total number of integers is less than 20) and store the integers in an array a. 
Then sort the integers in this array in descending order*/
#include <stdio.h>
int *sort(int x,int a[20]);//function prototype
int main()
{
	int a[20];
	int n,i;
	int *p;
	p=&a[0];
	printf("Please enter how many numbers do you want to enter(the number of integers less than 20):  ");
	scanf("%d",&n);
	//enter how many integers you want to enter
	printf("Please enter %d integers(press enter when you finish entering a integer): ",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);//enter integers

	p=sort(n,a);//sort the array
	for(i=0;i<n;i++)
		printf("%d,",*p++);
	//print out the resutl

	return 0;
}
int *sort(int x,int a[20]){
	int i,n,temp;
	for(i=0;i<x;i++){	//start sorting
		for(n=0;n<x-1-i;n++){
			if(a[n]<a[n+1]){
				temp=a[n];
				a[n]=a[n+1];
				a[n+1]=temp;
		}
	}
	}
	//finish sorting
	return a;
	
	
}




