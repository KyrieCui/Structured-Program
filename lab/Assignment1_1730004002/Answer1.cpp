/*answer1*/
#include <stdio.h>
int main()
{
	int i=0,j=5;
	char ch;
	scanf_s("%c",&ch);
	printf("%d is the ASCII code of '%c'\n",ch,ch);
	printf("the value of i is %d\n",i);
	i=ch;
	printf("the value of i is %d\n",i);
}
/*  when I built the program,the main function missing type specifier*/
/* After I fix the errors and re-built the project,it has warning.Because variable f isn't used,and the variable i doesn't be initialized.
When scanf the characters,it doesn't give variable ch address.And use scanf may be unsafe.*/
/*Fixed*/
