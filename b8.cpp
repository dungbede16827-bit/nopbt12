#include <stdio.h>

void printArray(int *arr, int size) {
    printf("\nGia tri cua mang la:\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, *(arr + i));
    }
}
void reverseString(int *arr, int size) {
    int temp;

   
    for (int i = 0; i < size / 2; i++) {
        temp = *(arr + i);
        *(arr + i) = *(arr + (size - i - 1));
        *(arr + (size - i - 1)) = temp;
    }

    printf("\nMang sau khi hoan doi la:\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, *(arr + i));
    }
}


int main () {
	int inputString[10] ;
	
	
	int size;
	printf("moi ban nhap vao so phan tu \n");
	scanf("%d",&size);
	
	printf("moi ban nhap vao gia tri cua mang : \n");
	for(int i = 0 ; i < size ; i ++ ) {
		printf("inputString[%d] = ",i);
		scanf("%d",&(inputString[i]));
	}
	
	
 	printArray( inputString , size);
	
	reverseString(inputString, size);
		
	
	return 0;
}
