#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void encrypt(int n, int key[][3],char p_text[],char c_text[]){
	int len=strlen(p_text);
	int p[10],a[3][3]={0},b[3][3]={0},k=0;
	for(int i=0;i<len;i++)
	p[i]=p_text[i]-65;
	for(int j=0;j<len/n;j++)
	for(int i=0;i<n;i++)
	a[i][j]=p[k++];
	for(int i=0;i<n;i++)
	for(int j=0;j<len/n;j++)
	for(int k=0;k<n;k++)
	b[i][j]+=key[i][k]*a[k][j];
	k=0;
	for(int j=0;j<len/n;j++)
	for(int i=0;i<n;i++)
	c_text[k++]=(b[i][j]%26)+65;
	c_text[k]='\0';
}
void decrypt(int n, int key[][3],char p_text[],char c_text[]){
	int len=strlen(p_text);
	int p[10],a[3][3]={0},b[3][3]={0},k=0;
	for(int i=0;i<len;i++)
	p[i]=p_text[i]-65;
	for(int j=0;j<len/n;j++)
	for(int i=0;i<n;i++)
	a[i][j]=p[k++];
	for(int i=0;i<n;i++)
	for(int j=0;j<len/n;j++)
	for(int k=0;k<n;k++)
	b[i][j]+=key[i][k]*a[k][j];
	k=0;
	for(int j=0;j<len/n;j++)
	for(int i=0;i<n;i++)
	c_text[k++]=(b[i][j]%26)+65;
	c_text[k]='\0';
}
void main(){
	char p_text[10],c_text[10];
	int k2[3][3]={{3,3},{2,5}};
	int ik2[3][3]={{15,17},{20,9}};
	int n;
	printf("Enter the letters in capital letters:");
	scanf("%s",p_text);
	printf("\n1)k2 and enc\n2)k2 and dec\nEnter choice");
	scanf("%d",&n);
	if(n==1) encrypt(2,k2,p_text,c_text);
	else if (n==2) decrypt(2,ik2,p_text,c_text);
	else{ printf("Invalid choice");
	exit(0);
	}
	if(n==1) printf("Ciphertext is %s",c_text);
	else printf("Plaintext is %s",c_text);
}
