#include<stdio.h>
 int compareArrays(int *a, int *b, int n) {
 	for (int i = 0; i < n; i++) {
        if (*(a + i) != *(b + i)) {
            return 0;  
        }
    }
    return 1;   
}
 	
 	


int main(){
	int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {1, 2, 3, 4, 5};

	int n = 5;
	
	if (compareArrays(arr1, arr2, n) == 1) {
        printf("Hai mang giong nhau\n");
    } else {
        printf("Hai mang khac nhau\n");
    }

	
	
	
	return 0;
}
