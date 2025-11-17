#include<stdio.h>

int findMax(int *arr, int n){
	if (n == 0) {
	return -1;
}
    int max = *arr;
    for (int i = 1; i < n; i++){
        if (*(arr + i) > max)
            max = *(arr + i);
    } printf("Max = %d ", max);
    return max;
}

int main(){
	int arr[]={9,0,3,6,5,6};
	int size = sizeof(arr)/sizeof(int);
	findMax(arr,size);
	return 0;
}
