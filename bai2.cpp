#include <stdio.h>
#include <string.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	
	
	
}

int main () {
	
	int a = 5;
	int b = 10;
	
	
	printf(" gia tri a before = %d\n",a);
	printf("gia tri b before = %d\n",b);
	
	 swap( &a, &b);
	printf(" gia tri a after = %d\n",a);
	printf("gia tri b after = %d\n",b);
	return 0;
}
