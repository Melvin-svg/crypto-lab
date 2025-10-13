#include<stdio.h>
void main(){
	int m[100][100],n,i,j,t[100][100];
	printf("Enter the order of the square matrix:");
	scanf("%d",&n);
	printf("\nEnter matrix:");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&m[i][j]);
			t[j][i]=m[i][j];
		}
	}
	printf("Transpose matrix is :\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}
}
