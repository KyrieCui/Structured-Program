/*read a string and then find and print out the English letters only.*/
#include <stdio.h>
int main(){
	char ch1[50];
	int i;
	printf("Please enter a string(does not include space): ");
	scanf("%s",ch1);//input the string
	for(i=0;ch1[i]!='\0';i++){
		if((ch1[i]>='a'&&ch1[i]<='z')||(ch1[i]>='A'&&ch1[i]<='Z'))//if the character in the string is English letter, print the English letter
			printf("%c",ch1[i]);
	}
	printf("\n");
	return 0;
}
	