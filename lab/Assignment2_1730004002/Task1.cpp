/*print
#*#*#*#*#*
#*#*#*#*
#*#*#*
#*#*
#*
#
*/
#include <stdio.h>
int main(){
	int m,n;
	for(m=6;m>0;m--){
		for(n=1;n<2*m;n++){
			if(n%2==0)
				printf("*");
			else if(n==2*m-1&&n!=1){
				break;
			}
			else
				printf("#");
		}
			printf("\n");	
	}
		return 0;
	}


