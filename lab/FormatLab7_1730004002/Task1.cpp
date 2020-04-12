/*Read a string using ¡°%s¡± in a scanf statement and count the
number of characters in that string*/
#include <stdio.h>
int main(){
	char word[50];
	printf("Please enter some characters but the number of characters don't more than 50(enter \\0 indicate you finish entering): ");
	scanf("%s",word);

	int n,num;
	num=0;
	for(n=0;word[n]!='\0';n++){
		num=num+1;
	}

	
	printf("the number of characters is %d",num-2);
	 
	return 0;
}

		