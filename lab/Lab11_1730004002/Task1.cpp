#include<stdio.h>
#include<string.h>
int fileCopy(char *destFileName2,char *resFileName1);//function prototype
int main()
{
	char fileName1[20], fileName2[20];
	int flag;
	printf("Please enter the first file name:\n");
	scanf("%s", fileName1); // read name of file (.txt) to be copied
	FILE *fp1;
	FILE *fp2;
	strcat(fileName1, ".txt");//creat a new file 1
	fp1 = fopen(fileName1, "w");
	if((fp1 = fopen(fileName1, "w"))==NULL)
		printf("can not read the file");
	else
		fprintf(fp1,"%s","Hello World!\n");//input a string in file 1
	fclose(fp1);
	printf("Please enter the second file name:\n");
	scanf("%s", fileName2); // read name of file (.txt) to copy to
	strcat(fileName2, ".txt");
	fp2=fopen(fileName2,"w");//create a new file 2
	fprintf(fp2,"%s","123\n");//input a string in file 2
	fclose(fp2);
	flag = fileCopy(fileName2, fileName1);//use the function
	if (flag == 1)
		printf("Success");
	else
		printf ("Failure");
	return 0;
}
int fileCopy(char *destFileName2,char *resFileName1)
{
	FILE *fp3;
	FILE *fp4;
	char str[20];
	char str2[20]={"Hello World!"};
	fp3=fopen(resFileName1,"r");//open the file and read it
	fp4=fopen(destFileName2,"r+");//open the file read and change it
	while((fgets(str,20,fp3))!=NULL)//get the string from the Name1.txt
		fputs(str,fp4);//put the string to the Name2.txt
	fclose(fp3);
	fclose(fp4);//close the file
	fp4=fopen(destFileName2,"r");//open the file and read it
	while((fgets(str,20,fp4))!=NULL){//read the string from Name2.txt
		if(strcmp(str,str2))//compare str with str2
			return 1;
		else
			return 0;
	}
}

