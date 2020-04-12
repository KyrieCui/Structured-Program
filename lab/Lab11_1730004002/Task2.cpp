#include <stdio.h>
#include <stdlib.h>
struct stuRec{
	char name[20];
	int id;
	char gender;
};
int main()
{
	struct stuRec *p;
	p = (struct stuRec*)malloc(sizeof(struct stuRec));
	if (p){
	printf("please input name, id and gender\n");
	scanf("%s%d%*c%c", p->name, &p->id, &p->gender);
	printf("name:%-10s,ID:%d,gender:%c\n", p->name,p->id,p->gender);
	free (p);
	}
	return 0;
}
//1.The program identify a struct data, and use pointer to input name,id and gender,and output the information
//2.dynamically allocated memory
//3.%*c used to read a character but do not assign it to a variable
//4.chang the"%-10s"to"% 10s",the result of output of name will change that the "name:" and the string your enter will have 10 space.
//5.Because at the beginning of the program, it apply memory space from the system.After we finish using it,we should free the space.