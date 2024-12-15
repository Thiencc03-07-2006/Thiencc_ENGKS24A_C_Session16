#include <stdio.h>

void printArr();

int main(){
	int arr[5]={9,2,3,4,5},n=sizeof(arr)/sizeof(arr[0]);
	printArr(n,arr);
	return 0;
}

void printArr(int n,int *ptr){
	int i=0;
	while(i<n){
		printf("[%d]",*(ptr+i));
		i++;
	}
}
