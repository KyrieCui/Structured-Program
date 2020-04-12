/*Lab6Task4*/
#include <stdio.h>
int main()
{
	int m,n,z;
	n=0;
    for(m=8;m>0;m--){
		n++;
		if(n%2!=0)
			continue;
		for(n=1;n<=m;n++){
		  printf("*"); 
			
		
}
		printf("\n");
		for(z=1;z<m;z++){
				printf("=");
			}
		printf("\n");
	}
	return 0;
}

