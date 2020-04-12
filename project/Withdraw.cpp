#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct account{
	int number;
	char name[10];
	int password;
	float balance;
	char identfy[10];
};
struct account infor[10];
int id (int);
void pa(int,int);
int n;
void Withdraw() {
	getchar();
	//getchar();
	char c[6];
	float draw;
	int p[4];
	int i,pw;
	FILE *fp;
	fp=fopen("account.txt","r");  //open the account file
	for(i=0;i<10;i++)
		fscanf(fp,"%d %s %d %f %s",&infor[i].number,infor[i].name,&infor[i].password,&infor[i].balance,infor[i].identfy);
	fclose (fp);
	printf("Please input your account number:");
	scanf("%d%*c",&n);
	i=id(n);  //check the password
	char nv[10];
	for(i=0;i<10;i++){
		if(n==infor[i].number){  //account number
			strcpy(nv,infor[i].identfy);  //copy the identify information
			if(strcmp(nv,"VIP")==0){  //compare
				printf("You are VIP customer,You can withdraw at most 3000 per time.\n");
				break;
			}
			if(strcmp(nv,"Normal")==0){  //compare
				printf("You are Normal customer,You can withdraw at most 2000 per time.\n");
				break;
			}
		}
	}  //identify VIP or Normal
	printf("Please input the number that you want to withdraw\n");
	scanf("%f%*c",&draw);   //read the amount of money 
	if(strcmp(nv,"VIP")==0){
		for(i=0;i<10;i++){
			if(n==infor[i].number){  //account number
				if(draw<=infor[i].balance){  //compare
					if(draw<=3000){
						printf("Please enter the password: ");
						scanf("%d",&pw);
						pa(i,pw);//,p);  
						infor[i].balance=infor[i].balance-draw;//compute the newest balance
						printf("Withdraw succeed! Your balance is %.1f.\n",1.0*infor[i].balance);}
					else
						printf("You can not withdraw exceed \$3000\n");
				}
				else
					printf("You do not have enough money!\n");
			}
		}
	}
	if(strcmp(nv,"Normal")==0){  //compare
		for(i=0;i<10;i++){
			if(n==infor[i].number){  //account number
				if(draw<=infor[i].balance){  //compare
					if(draw<=2000){
						printf("Please enter the password: ");
						scanf("%d",&pw);
						pa(i,pw);//,p);
						infor[i].balance=infor[i].balance-draw;//compute the newest balance
						printf("Withdraw succeed! Your balance is %.1f.\n",1.0*infor[i].balance);}
					else
						printf("You can not withdraw exceed \$2000\n");
				}
				else
					printf("You do not have enough money!\n");
			}
		}
	}
	
	fp=fopen("account.txt","r+");//exchange the balance
	for(i=0;i<10;i++)
		fprintf(fp,"%d %s %d %.1f %s\n",infor[i].number,infor[i].name,infor[i].password,infor[i].balance,infor[i].identfy);
	fclose(fp);

	
	//getchar();
}
int id(int number)
{
	int i,p;
	for(i=0;i<10;i++){
		if(number==infor[i].number){
			printf("Please enter your password:");
			scanf("%d",&p);
			pa(i,p);//,p);
			break;
		}
		if(i==9){
			if(number!=infor[i].number){
				printf("You enter error account number,please try again.\nPlease enter your account number\n");
				scanf("%d",&n);
				i=id(n);
				break;
			}
		}

	}
	return i;
}
void pa (int a,int p)//,int p)   //password is right or not
{
	if(p==infor[a].password)
		printf("Succeed!\n");//the password is right
	else{
		printf("The password is wrong,please try again\n");//the password is wrong
		scanf("%d",&p);
		pa(a,p);//,p);
	}
}





