/*copy the string from res to dest and return the copied
string*/
#include <stdio.h>
char* stringCopy(char*dest,char*res);
int main()
{
	char str1[20],str2[20];
	scanf("%s",str1);
	stringCopy(str2,str1);
	printf("%s\n",str2);
	return 0;
}
char* stringCopy(char*dest,char*res)
{	
	while(*res!='\0')
	*dest++=*res++;
	*dest='\0';
	return dest;
	
	
}
	
	
	