#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdlib.h>
#include<string.h>
void main(){
        char text[40],c_text[40],ch;
        int i,key=0;
        printf("Enter your plaintext:");
        fgets(text,sizeof(text),stdin);
	printf("\n Enter your ciphertext key(must be greater than 0)");
	scanf("%d",&key);
	if(key<1){
		printf("\nInvalid key range");
		exit(0);
	}
        printf("\nCiphertext is:");
        for(i=0;text[i]!='\0' && text[i]!='\n';i++){
                ch=text[i];
                if (ch==' '){
                        c_text[i]=ch;
                }
                else if(isalnum(ch)){
                if (isupper(ch)) ch=(ch-'A'+key+26)%26+'A';
                if (islower(ch)) ch=(ch-'a'+key+26)%26+'a';
                if(isdigit(ch)) ch=(ch-'0'+key+10)%10+'0';
                c_text[i]=ch;
                }
                else printf("\n Invalid input:%c\n",ch);
                printf("%c",c_text[i]);
        }
        c_text[i]='\0';
        printf("\n");

}
