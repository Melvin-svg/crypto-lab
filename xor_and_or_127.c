#include<stdio.h>
void main(){
	char *str="Hello World";
	int i=0;
	for(int i=0;str[i]!='\0';i++){
		char ch=str[i];
		char andres=ch&127;
		char orres=ch|127;
		char xorres=ch^127;
		printf("Character: %x (ASCII %d)\n",ch,ch);
		printf("AND with 127: %x (ASCII %d)\n",andres,andres);
		printf("OR with 127: %x (ASCII %d)\n",orres,orres);		
		printf("XOR with 127: %x (ASCII %d)\n",xorres,xorres);
		printf("--------------------------------------\n");
	}
}
