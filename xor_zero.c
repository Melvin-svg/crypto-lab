#include<stdio.h>
void main(){
	char *str="Hello World";
	int i=0;
	while(str[i]!='\0'){
		char xor_char=str[i]^0;
		printf("%c",xor_char);
		i++;
	}
	printf("\n");
}
