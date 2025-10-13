#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdlib.h>
#include<string.h>
void main(){
	char text[40],c_text[40],ch;
	int i;
	printf("Enter your plaintext:");
	fgets(text,sizeof(text),stdin);
	printf("\nCiphertext is:");
	for(i=0;text[i]!='\0' && text[i]!='\n';i++){
		ch=text[i];
		if (ch==' '){
			c_text[i]=ch;
		}
		else if(isalnum(ch)){
		if (isupper(ch)) ch=(ch-'A'+3+26)%26+'A';
		if (islower(ch)) ch=(ch-'a'+3+26)%26+'a';
		if(isdigit(ch)) ch=(ch-'0'+3+10)%10+'0';
		c_text[i]=ch;
		}
		else printf("\n Invalid input:%c\n",ch);
		printf("%c",c_text[i]);
	}
	c_text[i]='\0';
	printf("\n");
}
