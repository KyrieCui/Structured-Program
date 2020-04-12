#include<stdio.h>
int ident(int number);
void pass(int a,int p);
struct account{
		int no;
		char name[10];
		int password;
		float balance;
		char ViporNormal[20];
		};
		struct account acct[20];
void Inquiry()
{
	int a, accountNO, password, i;
	FILE *fp;
	fp = fopen("account.txt", "r");
	for (a = 0; a < 10; a++)
	{
		fscanf(fp, "%d%s%d%f%s", &acct[a].no, acct[a].name, &acct[a].password, &acct[a].balance, acct[a].ViporNormal);
	}
	fclose(fp);
	printf("please input your accountNO\n");
	scanf("%d", &accountNO);
	i = ident(accountNO);
	printf("Hello,%s!The balance in your account is %.1f\n", acct[i].name, acct[i].balance);
	//else printf("your passwords are wrong\n");}
	//else printf("This account doesn't exit\n");
	/*for(a=0;a<10;a++){
		printf("%d %s %d %f %s\n",acc[a].No,acc[a].name,acc[a].password,acc[a].balance,acc[a].VIPorNormal);}*/
	getchar();
	getchar();
}

int ident(int number){
	int i,p;
	for(i=0;i<10;i++){
		if(number==acct[i].no){
			printf("please input your password\n");
			scanf("%d",&p);
			pass(i,p);
			break;}
		if(i==9){
			if(number!=acct[i].no){
				printf("The accountNO you input are wrong,please try again\n");
				printf("please input your accountNO\n");
				scanf("%d",&number);
				i=ident(number);
			break;}}}
	return i;}

void pass(int a,int p){
	if(p==acct[a].password){
		printf("Now inquiry your balance\n");}
	else{
		printf("The passwords you input are wrong,please try again\n");
		printf("please input your password\n");
		scanf("%d",&p);
		pass(a,p);}}