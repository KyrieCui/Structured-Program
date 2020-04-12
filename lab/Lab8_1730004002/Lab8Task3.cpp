/*Read a line of sentence which has only English letters and
spaces.count the number of words in this sentence*/
#include <stdio.h>
int main()
{
	char ch1[100];
	printf("Please enter a line sentence with English letters(enter 'End' to indicate you finish entering): ");
	scanf("%[^*]",ch1);//this step is found on the Internet
	int n,num;
	num=0;
	

	for(n=0;ch1[n]!='\0';n++){
		if(ch1[n]==' ')
			num=num+1;
		
	}
	
	printf("The number of words is %d\n",num);
	return 0;
}


