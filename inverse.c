#include<stdio.h>
void main(){
	int a[10][10],m[10][10],n,i,j,det;
	float in[10][10];
	printf("Enter the order of square matrix:");
	scanf("%d",&n);
	printf("\nEnter the values:");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	if(n==2){
		m[0][0]=a[1][1];
		m[0][1]=-a[1][0];
		m[1][1]=a[0][0];
                m[1][0]=-a[1][0];
		det=(a[0][0]*a[1][1]-a[0][1]*a[1][0]);
	}
	if(n==3){
		m[0][0]=((a[1][1]*a[2][2])-(a[1][2]*a[2][1]));
		m[0][1]=-((a[1][0]*a[2][2])-(a[1][2]*a[2][0]));
		m[0][2]=((a[1][0]*a[2][1])-(a[2][0]*a[1][1]));
                m[1][0]=-((a[0][1]*a[2][2])-(a[2][1]*a[0][2]));
		m[1][1]=((a[0][0]*a[2][2])-(a[0][2]*a[2][0]));
		m[1][2]=-((a[0][0]*a[2][1])-(a[2][0]*a[0][1]));
                m[2][0]=((a[0][1]*a[1][2])-(a[0][2]*a[1][1]));
		m[2][1]=-((a[0][0]*a[1][2])-(a[1][0]*a[0][2]));
                m[2][2]=((a[0][0]*a[1][1])-(a[0][1]*a[1][0]));
		det=(a[0][0]*((a[1][1]*a[2][2])-(a[1][2]*a[2][1])))-(a[0][1]*((a[1][0]*a[2][2])-(a[1][2]*a[2][0])))+(a[0][2]*((a[1][0]*a[2][1])-(a[2][0]*a[1][1])));
	}
	printf("\nCofactor matrix is\n");
        for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                printf("%d\t",m[i][j]);
        }
        printf("\n");
	}	
	printf("\nAdjoint matrix is\n");
        for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                printf("%d\t",m[j][i]);
		in[i][j]=m[j][i]/det;
        }
        printf("\n");
        }       
	printf("\nInverse matrix is\n");
        for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                printf("%f\t",in[i][j]);
        }
        printf("\n");
        }  	

}
