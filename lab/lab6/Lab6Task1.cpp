/*Lab6Task1*/
#include <stdio.h>
int main()
{
	char ch1;
	printf("Please enter student's GPA grade ");
	scanf("%c",&ch1);

	switch(ch1){
	case 'A':printf("GPA point is 4.0\n");
		break;
	case 'a':printf("GPA point is 4.0\n");
		break;
	case 'B':printf("GPA point is 3.00\n");
		break;
	case 'b':printf("GPA point is 3.00\n");
		break;
	case 'C':printf("GPA point is 2.00\n");
		break;
	case 'c':printf("GPA point is 2.00\n");
		break;
	case 'D':printf("GPA point is 1.00\n");
		break;
	case 'd':printf("GPA point is 1.00\n");
		break;
	case 'F':printf("GPA point is 0.00\n");
		break;
	case 'f':printf("GPA point is 0.00\n");
		break;
	default:printf("Warning! You enter invalid grade\n");
	}
	 
	return 0;
}

