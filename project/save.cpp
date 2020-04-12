#include<stdio.h>
int iden(int number);//Fuction declaration.
void passwo(int a,int p);//Fuction declaration.
struct account{//Make a struct to collect the information of each student.
		int No;
		char name[10];
		int password;
		float balance;
		char VIPorNormal[20];};
		struct account acc[20];
void Save(){
	int a,accountNO,password,i;
	float save;
	FILE *fp;
	fp=fopen("account.txt","r");//Read the information from "account.txt".
	for(a=0;a<10;a++){
	fscanf(fp,"%d%s%d%f%s",&acc[a].No,acc[a].name,&acc[a].password,&acc[a].balance,acc[a].VIPorNormal);}//Scanf the information to the struct.
	fclose(fp);
	printf("please input your accountNO\n");
	scanf("%d",&accountNO);//Input the accountNO.
	i=iden(accountNO);//Call the fuction.
	printf("How much do you want to save?\n");
	scanf("%f",&save);//Input the amount of saving.
	acc[i].balance=acc[i].balance+save;//Change the balance after saving.
	fp=fopen("account.txt","r+");
	for(a=0;a<10;a++){
	fprintf(fp,"%d %s %d %.1f %s\n",acc[a].No,acc[a].name,acc[a].password,acc[a].balance,acc[a].VIPorNormal);}//Save the information to the file.
	fclose(fp);
	printf("You succeed in saving %f to your account\n",save);
	getchar();
	getchar();
}
int iden(int number){//Fuction definition.
	int i,p;
	for(i=0;i<10;i++){
		if(number==acc[i].No){//Judge if the accountNO exits.
			printf("please input your password\n");
			scanf("%d",&p);//If the accountNO exits, input the password.
			passwo(i,p);
			break;}
		if(i==9){
			if(number!=acc[i].No){//Judge if the passwords are correct.
				printf("The accountNO you input are wrong,please try again\n");
				printf("please input your accountNO\n");//If the passwords are wrong,input them again.
				scanf("%d",&number);
				i=iden(number);//Call the fuction.
			break;}}}
	return i;}

void passwo(int a,int p){//Fuction definition.
	if(p==acc[a].password){//If the passwords are correct,go to save money.
		printf("Now start to save money\n");}
	else{
		printf("The passwords you input are wrong,please try again\n");
		printf("please input your password\n");
		scanf("%d",&p);
		passwo(a,p);}}