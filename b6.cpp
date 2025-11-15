#include <stdio.h> 
int search (int *arr ,int  size , int value) {
 int flag = -1;
 for (int i = 0 ; i < size ; i ++) {
 	
 	if ( *(arr +i) == value ) {
 		
 		return i;
	 }
 } 
 return 0;
 


}




int main () {
	
	int arr[]= {1,5,9,2,3};
	int change;
	int value;
	int size = sizeof(arr)/sizeof(int);
	printf("nhap vao gia tri can timt kiem : \n");
	scanf("%d",&value);
	
	int result = search(arr, size, value);
	
	if (result!=-1) {
		printf (" gia tri %d tim thay o vi tri %d ",value,result);
	} else {
		printf ("khong tim thay gia tri %d ",value);
	}
	
	return 0;
}
