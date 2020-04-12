#include <stdio.h>
int Power2(int n){// The subfunction implementation
	int s;
	if(n==0)
		return 1;

	s=2*Power2(n-1);
	return s;
}

