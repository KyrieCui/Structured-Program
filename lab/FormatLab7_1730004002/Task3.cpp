/*Write two functions: main funtion and a sub©\function
compareASCIICode*/
#include <stdio.h>
int compare(int,int);
int main(){
	char ch1,ch2;
	int n,code1,code2;
	printf("Please enter two characters: ");


	scanf("%c%c",&ch1,&ch2);
	code1=ch1;
	code2=ch2;
	
    
	n=compare(code1,code2);
	printf("the result is %d\n",n);

	return 0;
}
int compare(int y,int z){
	int x;
	if(y>z){
		x=1;
		return x;
	}
	if(y==z){
		x=0;
		return x;
	}
	if(y<z){
		x=-1;
		return x;
	}
}
		




	
	