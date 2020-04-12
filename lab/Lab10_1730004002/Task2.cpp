/*read students¡¯ information and sort
according to the names in ascending order*/
#include <stdio.h>
#include <string.h>
int main()
{
	struct students{
		char name[10];
		int score;
		char major[10];
	};
	struct students information[50];
	int i,n,x;
	struct studens {
		char name[10];
		int score;
		char major[10];
	};
	struct students temp[50];
	printf("Please enter how many students do you want to input: ");
	scanf("%d",&n);

	printf("Please enter %d students' names,majors and scores(the name don't include space)\n",n);
	for(i=0;i<n;i++)
		scanf("%s%s%d",information[i].name,information[i].major,&information[i].score);
		
	//enter the name,major and score
	
	//start to sort
	for(x=0;x<n-1;x++){
		for(i=0;i<n-1-x;i++){
			if(strcmp(information[i].name,information[i+1].name)>0){
				temp[i]=information[i+1];
				information[i+1]=information[i];
				information[i]=temp[i];
			}
		}
	}
	printf("Afer sorting:\n");
	for(i=0;i<n;i++){
		printf("%s",information[i].name);
		printf("  %s",information[i].major);
		printf("  %d\n",information[i].score);
	}
		return 0;
}


