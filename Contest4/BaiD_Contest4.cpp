#include<stdio.h>
main(){
	int n;
	scanf("%d", &n);
	int C[100][100];
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= i; j++){
			if(j == 0 || j == i){
				C[i][j] = 1;
				printf("%d ",C[i][j]);
			}
			else {
				C[i][j] = C[i-1][j] + C[i-1][j-1];
				printf("%d ", C[i][j]);
			}
		}
		printf("\n");
	}
    return 0;
}

