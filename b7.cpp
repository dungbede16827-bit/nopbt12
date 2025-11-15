#include <stdio.h> 

void sort(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(arr + i) > *(arr + j)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}


int main () {
	
	int arr[]= {1,7,5,2,3};
	int pos;
	int value;
	int size = sizeof(arr)/sizeof(int);
	
	
	printf("Mang ban dau: \n ");
	for(int i = 0 ; i < size ; i ++) {
		printf ("arr[%d] = %d ",i,*(arr +i));
	}
	sort(arr, size);

    printf("\nMang sau khi sap xep: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }

	
	return 0;
}
