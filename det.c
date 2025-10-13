 #include<stdio.h>
void main(){
	int a[3][3],det,i,j,n;
	printf("Enter order of the matrix:");
	scanf("%d",&n);
	printf("\nEnter matrix");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	if (n==2) det=(a[0][0]*a[1][1]-a[0][1]*a[1][0]);
	else if (n==3) det=(a[0][0]*((a[1][1]*a[2][2])-(a[1][2]*a[2][1])))-(a[0][1]*((a[1][0]*a[2][2])-(a[1][2]*a[2][0])))+(a[0][2]*((a[1][0]*a[2][1])-(a[2][0]*a[1][1])));	
	printf("\nThe determinant is %d\n",det);
}
