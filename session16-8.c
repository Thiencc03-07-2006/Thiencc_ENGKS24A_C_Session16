#include <stdio.h>
#include <string.h>

int main(){
	char inputString[100],reverseString[100];
	printf("vui long nhap chuoi: ");
	fgets(inputString,sizeof inputString,stdin);
	inputString[strcspn(inputString,"\n")]='\0';
	int i=0;
	while(strlen(inputString)-i>0){
		reverseString[i]=inputString[strlen(inputString)-i-1];
		i++;
	}
	printf("chuoi ban dau [%s]\n",inputString);
	printf("chuoi dao [%s]",reverseString);
	return 0;
}
