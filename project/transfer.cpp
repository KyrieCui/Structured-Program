#include<stdio.h>
#include <string.h>
int identify(int number);
void password(int a,int p);
void transfer(int m,int n,float b);
void judgement(char ch1);
int transferaccount(int number);
void save();
//function prototype
struct account
	{
		int number;
		char name[10];
		int password;
		float balance;
		char identify[6];
	};
	struct account data[10];
	int myaccount,account;
	float money;
	//global variabile
void Transfer()
{
	getchar();
	FILE *fp;
	int i;
	char ch1;
	printf("Here is the Withdraw function\n");
	fp=fopen("account.txt","r");//open and read the file
	for(i=0;i<10;i++)
		fscanf(fp,"%d %s %d %f %s",&data[i].number,data[i].name,&data[i].password,&data[i].balance,data[i].identify);//scanf the data in the file
	fclose(fp);//close the file
	printf("Please enter your account number\n");
	scanf("%d",&myaccount);//enter account number
	i=identify(myaccount);//identify the account 
	//start to transfer
	printf("Hello! %s Now we start to transfer\n",data[i].name);
	printf("Please enter the account that you want to transfer:");
	scanf("%d%*c",&account);//enter the account you want to transfer to
	i=transferaccount(account);//identify whether the account is exist
	printf("Please how nuch you want to transfer: ");
	scanf("%f%*c",&money);//enter the amount of money
	transfer(myaccount,account,money);//tranfer the money
	printf("Are you sure transfer to %s?(If you sure,enter Y,othrwise,enter N)\n",data[i].name);
	scanf("%c",&ch1);
	judgement(ch1);

	printf("Your business is finished\n");
	getchar();
	getchar();
}
int identify(int number)//the function use to identify account number
{
	int i,p;
	for(i=0;i<10;i++){
	 if(number==data[i].number){         //if the number is right,enter password
			printf("Please enter your password: ");
			scanf("%d",&p);//enter password
			password(i,p);//identify password
			break;
				}
	 if(i==9){
		 if(number!=data[i].number) {  //if the account number can't be found in the txt file,please enter your account number account again
		 printf("You enter error account number,please try again!\n");
		 printf("Please enter your account number\n");
		 scanf("%d",&myaccount);
		 i=identify(myaccount);
		 break;
		}
	 }

	}
	return i;
}
void password(int a,int p)//the function use to identify password
{
	if(p==data[a].password){ //if the password is right,continue to the transfer function
					printf("Now start to transfer\n");
	}
	else {  //if the password wrong ,try again
					printf("You enter the wrong password,please try again!\n");
					printf("Please enter your password: ");
					scanf("%d",&p);
					password(a,p);
				    }
				
}
int transferaccount(int number)
{
	int i,p;
	for(i=0;i<10;i++){
	 if(number==data[i].number){         //if the number is right,enter password
			break;
				}
	 if(i==9){
		 if(number!=data[i].number) {  //if the account number can't be found in the txt file,please enter your account number account again
		 printf("You enter error account number,please try again!\n");
		 printf("Please enter your account number\n");
		 scanf("%d",&account);
		 i=transferaccount(account);
		 break;
		}
	 }

	}
	return i;
}
void judgement(char ch1)
{
	int i;
	if(ch1=='Y'){ //if you enter Y, the transfer will execute
		save();
		printf("Transfer successful\n");
		for(i=0;i<10;i++){
		if(myaccount==data[i].number)
			printf("Your balance if %.1f\n",data[i].balance);
	}

	}
	else if(ch1=='N') //if you enter N, teh fransfer will be cancelled
		printf("Your business is cancel\n");
	else{
		printf("Sorry! Your enter the wrong order,please enter again\n");
		scanf("%c",&ch1); //if you enter the wrong order, the system will tell you that you enter wrong order
		judgement(ch1);
	}
}
void transfer(int m,int n, float b)
{
	int i;
	for(i=0;i<10;i++){
		if(m==data[i].number){//find your number
			if(strcmp(data[i].identify,"VIP")==0){
				if((b<=data[i].balance)&&(b<=20000.0)){ //if your balance is enough, transfer will be executed
					data[i].balance=data[i].balance-b-0.005*b;
						for(i=0;i<10;i++){
							if(n==data[i].number){//find the account you want to transfer to
								data[i].balance=data[i].balance+b;
					}
				}
			}
			else if((b>data[i].balance)||(b>20000.0)){ //if your balance is not enough,the system will tell that your balance is not enough
			printf("Your balance is not enough,please change your amount of money you want to transfer\n");
			scanf("%f%*c",&b);
			transfer(m,n,b);
			}
			}
			else if(strcmp(data[i].identify,"Normal")==0){
				if((b<=data[i].balance)&&(b<=10000.0)){
					data[i].balance=data[i].balance-b-0.01*b;
						for(i=0;i<10;i++){
							if(n==data[i].number){//find the account you want to transfer to
								data[i].balance=data[i].balance+b;
							}
						}
				}
			
				else if((b>data[i].balance)||(b>10000.0)){ //if your balance is not enough,the system will tell that your balance is not enough
			printf("Your balance is not enough,please change your amount of money you want to transfer\n");
			scanf("%f%*c",&b);
			transfer(m,n,b);
				}
			}
		}
	}
}
	

void save()
{
	int i;
	FILE *fp2;
	fp2=fopen("account.txt","r+");
	for(i=0;i<10;i++)
	fprintf(fp2,"%d %s %d %.1f %s\n",data[i].number,data[i].name,data[i].password,data[i].balance,data[i].identify);
	fclose(fp2);//save the file
}
	



	
