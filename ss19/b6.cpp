#include<stdio.h>
 copyArray(int *src, int *dest, int n) {
 	for(int i = 0 ; i < n ; i++){
 		*(dest+i) = *(src + i);
	 }
 }
 	
 	


int main(){
	int A[5] = {1, 2, 3, 4, 5};
    int B[5] ;

	int  n =5;
	
	copyArray(A,B,n) ;
	
	printf("mang B sau khi sao chep : ");
	for(int i = 0 ; i < n ; i ++) {
		printf("%d", B[i]);
	}

	
	
	
	return 0;
}
