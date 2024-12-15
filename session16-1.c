#include <stdio.h>

int main(){
	int a=10,*ptr=&a;
	printf("cach 1 bien\n");
	printf("gia tri %d vi tri %d\n",a,&a);
	printf("cach 2 con tro\n");
	printf("gia tri %d vi tri %d",*ptr,ptr);
	return 0;
}
