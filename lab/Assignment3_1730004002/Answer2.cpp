/*read an integer from keyboard, insert this value into proper place of the array and output the updated sorted array values.*/
#include <stdio.h>
int main()
{
	int i,n,temp;
	int a[7]={3,10,15,30,55,77};
	printf("Please enter an integer: ");
	scanf("%d",&a[6]);//enter an integer
	for(i=0;i<6;i++){   //start sorting
		for(n=0;n<6-i;n++){
			if(a[n]>a[n+1]){
				temp=a[n];
				a[n]=a[n+1];
				a[n+1]=temp;
			}
		}
	}
	//end of sorting
	for(i=0;i<7;i++)
		printf("%d,",a[i]);//print out the sorted array values
	return 0;
}

