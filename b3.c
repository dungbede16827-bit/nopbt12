#include <stdio.h>
#include <string.h>

int  Sum(int *a , int *b) {
	 return  *a + *b;
	
}

int main () {
	
	int a = 4;
	int b = 5;
	
	int result = Sum( &a, &b);
	
	printf("Sum = %d ",result);
	
	return 0;
}
