#include <stdio.h>

void countValue(int *arr, int n, int x) {
	int count= 0;
	for(int i = 0 ; i < n ; i++ ) {
		if(	x == *(arr + i)) {
			count++;
			} 
				}
		if (count == 0) {
        printf("Khong tim thay gia tri %d trong mang.\n", x);
    } else {
        printf("Gia tri %d xuat hien %d lan trong mang.\n", x, count);
    }

	 
	 }


int main() {
    int arr[6]={1,1,2,3,4,5,};
    int x;
    int n = sizeof(arr)/sizeof(int);
    printf("moi ban nhap vao gia tri can dem x : \n");
    scanf("%d",&x);
    
    countValue(arr,n,x);
    
    return 0;
}

