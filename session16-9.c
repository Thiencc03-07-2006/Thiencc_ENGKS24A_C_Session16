#include <stdio.h>

void insertArr();

int main(){
	int arr[100]={9,2,3,4,5},n=5,num,index;
	printf("vui long nhap vi tri muon chen: ");
	scanf("%d",&index);
	printf("vui long nhap gia tri chen: ");
	scanf("%d",&num);
	insertArr(arr,num,index,n);
	return 0;
}

void insertArr(int arr[100],int num,int index,int n){
	int i=0,*ptr=arr;
	while(n-i>index){
		*(ptr+(n-i))=*(ptr+(n-i-1));
		i++;
	}
	n++;
	*(ptr+index)=num;
	i=0;
	while(i<n){
		printf("[%d]",*(ptr+i));
		i++;
	}
}
