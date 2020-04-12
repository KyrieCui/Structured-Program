/*Modify the following program so that values of a and b can
be exchanged.*/
#include<stdio.h>
int exchange(int x, int *y);
int main()
{
	int a = 10, b = 20;
	printf("before exchange: a = %d\n, b = %d\n", a, b);
	a=exchange(a, &b);
	printf("after exchange: a = %d, b = %d \n", a, b);
	return 0;
}
int exchange(int x, int *y){
	int temp;
	temp = x;
	x = *y;
	*y = temp;
	return x;
}