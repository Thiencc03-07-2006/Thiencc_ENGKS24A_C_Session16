#include <stdio.h>

void findArr();

int main(){
	int arr[5]={9,2,3,4,5},n=sizeof(arr)/sizeof(arr[0]),num;
	printf("vui long nhap gia tri can tim: ");
	scanf("%d",&num);
	findArr(arr,num,n);
	return 0;
}

void findArr(int arr[],int num,int n){
	int i=0,*ptr=arr;
	while(i<n){
		if(*(ptr+i)==num){
			printf("vi tri can tim la %d\n",i);
		}
		i++;
	}
}
