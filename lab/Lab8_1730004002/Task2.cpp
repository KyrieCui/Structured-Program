/*read one sentence character by character
(the sentence ends with return key ¡®\n', should not read as a
string) and output the number of the character ¡®a¡¯ in the
sentence.*/
#include <stdio.h>
int main()
{
	char ch1[100];
	printf("Please enter a sentence character by character and the number of characters don not more than 100: ");
	scanf("%s",ch1);
	int n,num;
	num=0;
	for(n=0;ch1[n]!='\0';n++){
		if(ch1[n]=='a')
			num=num+1;
	}
	printf("The number of character 'a' in the sentence is %d\n",num);

	return 0;
}
	