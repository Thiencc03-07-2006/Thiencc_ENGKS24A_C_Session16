#include <stdio.h>

void changeArr();

int main(){
	int arr[5]={9,2,3,4,5},n=sizeof(arr)/sizeof(arr[0]),num,index;
	printf("vui long nhap vi tri muon thay doi: ");
	scanf("%d",&index);
	printf("vui long nhap gia tri thay doi: ");
	scanf("%d",&num);
	changeArr(arr,num,index,n);
	return 0;
}

void changeArr(int arr[],int num,int index,int n){
	int i=0,*ptr=arr;
	*(ptr+index)=num;
	while(i<n){
		printf("[%d]",*(ptr+i));
		i++;
	}
}
