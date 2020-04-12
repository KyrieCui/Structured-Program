/*input an integer and decide if it is multiple of 3 or 2*/
#include <stdio.h>
int main()
{
	int i;
	printf("Please enter an integer: ");
	scanf("%d",&i);//enter an integer

    if(i%2==0&&i%3==0)
		printf("%d can be multiple of 2 and 3\n",i);
	else if(i%3==0)
		printf("%d can be multiple of 3\n",i);
	else if(i%2==0)
		printf("%d can be multiple of 2\n",i);
	else
		printf("%d can not be multiple of 2 or 3\n",i);
	
	
	return 0;
}
		