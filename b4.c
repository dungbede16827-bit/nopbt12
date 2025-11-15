#include <stdio.h>

 void array(int *arr , int size) {
 	
 	for(int i = 0 ; i < size ; i++ ) {
 		printf ("arr[%d] = %d ",i, arr[i] );
	 }
 	
 }


int main () {
	
	int arrNumber[] = {1,2,3,4,5};
	int size = sizeof(arrNumber)/sizeof(int);
	array(arrNumber,size);
	return 0;
}
