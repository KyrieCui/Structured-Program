/*Lab8Task4*/
#include <stdio.h>
#include <string.h>
int stringLength(char s[]);
int main()
{
	char s[50];
	int num;
	printf("Please enter a string: ");
	scanf("%s",s);
	num=stringLength(s);
	printf("The number of characters is %d\n",num);

	return 0;
}
int stringLength(char s[])
{
	int x;
	x=strlen(s);
	return x;
}
	

