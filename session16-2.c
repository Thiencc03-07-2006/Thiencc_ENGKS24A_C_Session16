#include <stdio.h>

int main(){
	int a=10,b=12,*ptr1,*ptr2,save;
	ptr1=&a;
	ptr2=&b;
	save=*ptr1;
	*ptr1=*ptr2;
	*ptr2=save;
	printf("gia tri %d\n",a);
	printf("gia tri %d",b);
	return 0;
}
