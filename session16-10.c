#include <stdio.h>

void deleteArr();

int main(){
	int arr[100]={9,2,3,4,5},n=5,num,index;
	printf("vui long nhap vi tri muon xoa: ");
	scanf("%d",&index);
	deleteArr(arr,index,n);
	return 0;
}

void deleteArr(int arr[100],int index,int n){
	int i=index,*ptr=arr;
	while(i<n-1){
		*(ptr+i)=*(ptr+(i+1));
		i++;
	}
	n--;
	i=0;
	while(i<n){
		printf("[%d]",*(ptr+i));
		i++;
	}
}
