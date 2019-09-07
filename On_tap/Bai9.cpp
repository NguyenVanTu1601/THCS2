#include<stdio.h> 

int main(){
	int m,n,i,j;
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++){
		for( int j=0;j<n;j++){
			if(i==0 || i==m-1) printf("* ");
			else if(j == 0 && i != 1 && i != m-1) printf("* ");
			else if(j == n-1 && i != 1 && i != m-1) printf("* ");
			else if(i != 0 || j != 0 || i != m-1 || j != n-1) printf(" ");
		}
		printf("\n");	
	}
		return 0;
		
}
