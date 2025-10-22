#include<stdio.h>
int main(){
	int n,i,j,d,a[10][10],m[10][10];
	float x[10][10];
	printf("Enter the order of the square matrix: ");
	scanf("%d",&n);
	printf("\nEnter the values: ");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEntered Matrix is: \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	if(n==2){
		d=a[0][0]*a[1][1]-a[0][1]*a[1][0];
		printf("Determinant is: %d\n",d);
	}
	else{
		d=a[0][0]*((a[1][1]*a[2][2])-(a[1][2]*a[2][1]))-a[0][1]*((a[1][0]*a[2][2])-(a[1][2]*a[2][0]))+a[0][2]*((a[1][0]*a[2][1])-(a[1][1]*a[2][0]));
		printf("Determinant is: %d\n",d);
	}
	if(n==2){
		m[0][0]=+(a[1][1]);
		m[0][1]=-(a[1][0]);
		m[1][0]=-(a[0][1]);
		m[1][1]=+(a[0][0]);
		printf("\nCo-factor: \n");
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				printf("%d\t",m[i][j]);
			}
			printf("\n");
		}
	}
	else{
		m[0][0]=+((a[1][1]*a[2][2])-(a[1][2]*a[2][1]));
		m[0][1]=-((a[1][0]*a[2][2])-(a[1][2]*a[2][0]));
		m[0][2]=+((a[1][0]*a[2][1])-(a[1][1]*a[2][0]));
		m[1][0]=-((a[0][1]*a[2][2])-(a[0][2]*a[2][1]));
		m[1][1]=+((a[0][0]*a[2][2])-(a[2][0]*a[0][2]));
		m[1][2]=-((a[0][0]*a[2][1])-(a[0][1]*a[2][0]));
		m[2][0]=+((a[0][1]*a[1][2])-(a[1][1]*a[0][2]));
		m[2][1]=-((a[0][0]*a[1][2])-(a[1][0]*a[0][2]));
		m[2][2]=+((a[0][0]*a[1][1])-(a[0][1]*a[1][0]));
		printf("\nCo-factor: \n");
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				printf("%d\t",m[i][j]);
			}
			printf("\n");
		}
	}
	printf("\nAdjoint: \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",m[j][i]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			x[i][j]=m[j][i]/d;
		}
	}
	printf("\nInverse: \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%f\t",x[i][j]);
		}
		printf("\n");
	}
}
