#include <stdio.h>

void sortArr();

int main(){
	int arr[5]={9,8,7,6,5},n=sizeof(arr)/sizeof(arr[0]);
	sortArr(arr,n);
	return 0;
}

void sortArr(int arr[],int n){
	int i=0,j,*ptr=arr,save;
	while(i<n-1){
		j=0;
		while(j<n-i-1){
			if(*(ptr+j)>*(ptr+j+1)){
				save=*(ptr+j+1);
				*(ptr+j+1)=*(ptr+j);
				*(ptr+j)=save;
			}
			j++;
		}
		i++;
	}
	i=0;
	while(i<n){
		printf("[%d]",*(ptr+i));
		i++;
	}
}
