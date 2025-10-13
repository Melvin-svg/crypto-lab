#include<stdio.h>
int a[3][3],cofactor[3][3];
int fdet(int m[2][2]){
	int det;
	det=(m[0][0]*m[1][1]-m[0][1]*m[1][0]);
	return det;
}
int modify(int n[3][3],int e,int f){
	int c,d,nm[2][2];
	int a=0,b=0,ndet;
	for(c=0;c<3;c++){
		if (c==e) continue;
		for(d=0;d<3;d++){
			if (d==f) continue;
			nm[a][b]=n[c][d];
			b+=1;
		}
		a+=1;
	}
	ndet=fdet(nm);
	return ndet;
	}

void main(){
	int i,j,n,minor,m[2][2],o[3][3];
	printf("Enter order of the matrix:");
        scanf("%d",&n);
        printf("\nEnter matrix");
        for(i=0;i<n;i++){
                for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
        }}
	if (n==2){
		cofactor[0][0]=a[0][0];
		cofactor[0][1]=-a[1][0];
		cofactor[1][0]=-a[0][1];
                cofactor[1][1]=a[1][1];
	}
	if(n==3){
		cofactor[0][0]=modify(a,0,0);
		cofactor[0][1]=modify(a,0,1);
		cofactor[0][2]=modify(a,0,2);
		cofactor[1][0]=modify(a,1,0);
                cofactor[1][1]=modify(a,1,1);
                cofactor[1][2]=modify(a,1,2);
		cofactor[2][0]=modify(a,2,0);
                cofactor[2][1]=modify(a,2,1);
                cofactor[2][2]=modify(a,2,2);

	}
	printf("\nCofactor matrix is\n");
	for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		printf("%d\t",cofactor[i][j]);
	}
	printf("\n");
	}
}
