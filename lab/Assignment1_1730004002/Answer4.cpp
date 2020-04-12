/*read one character and decide if it is a digit, an English letter or others*/
#include <stdio.h>
int main()
{
	char ch1;
	printf("Please enter a character: ");
	scanf("%c",&ch1);

	if(ch1>='0'&&ch1<='9')
		printf("it's a digit\n");
	else if((ch1>='a'&&ch1<='z')||(ch1>='A'&&ch1<='Z'))
		printf("it's a English letter\n");
	else 
		printf("it's others\n");

	return 0;
}
	