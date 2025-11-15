#include <stdio.h>
#include <string.h>

int main () {
	
	int a = 4;
	int *PtrA = &a;
	
	printf(" dia chi cua bien %p ",&a);
	printf(" gia tri cua bien %d ",*PtrA);
	
	return 0;
}
