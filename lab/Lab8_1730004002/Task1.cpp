/*Print out the following pattern
*******
******#
*****##
****###
***####
**#####
*######
**/
#include <stdio.h>
int main()
{
	int m,n;
	for(m=7;m>0;m--){
		for(n=1;n<=m;n++){
			printf("*");
		}
		for(n=6;n>=m;n--){
		
			printf("#");
			}
		
		printf("\n");
	}
	
	return 0;
}