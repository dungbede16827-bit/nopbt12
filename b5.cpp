#include <stdio.h> 
void update(int arr[] ,int size, int a , int b) {
	
	arr[a] = b;
	printf(" mang sau khi cap nhat la : \n");
	for(int i = 0 ; i < size ; i ++) {
		printf (" arr[%d]=%d \n",i,*(arr+i));
	}
	printf("\n");
}



int main () {
	
	int arr[]= {1,2,3};
	int change;
	int location;
	int size = sizeof(arr)/sizeof(int);
	printf("nhap vao vi tri muon thay doi : \n");
	scanf("%d",&location);
	
	if(location <0 || location >=size) {
		printf("gia tri khong hop le");
	} else {
	printf ("moi ban nhap vao phan tu muon thay doi : \n");
	scanf("%d",&change);
	update(arr,size,location,change);
	}
	return 0;
}
