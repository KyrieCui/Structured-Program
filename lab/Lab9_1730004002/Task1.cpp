/*prints out the
biggest elements in the array.*/
#include <stdio.h>
void sort(float a[], int n);//function prototype
int i;//global variable
int main()
{
	float value[4];
	printf("Please enter 4 float numbers:\n");
	for(i=0;i<4;i++)
		scanf("%f",&value[i]);//scanf the value
	
	sort(value,0);//insert the sort function
	
	printf("value[3]=%f",value[3]);
	return 0;
}
void sort(float a[],int n)//define the function
{
	float temp=0;
	
	for(i=0;i<4;i++){              //the start of sort
		for(n=0;n<3-i;n++){
			if(a[n]>a[n+1]){
				temp=a[n];
				a[n]=a[n+1];
				a[n+1]=temp;
			}
		}
	}                          //the end of sort
			
		
	
}




