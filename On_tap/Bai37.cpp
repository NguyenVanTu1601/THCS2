#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long c[100][100];
main(){
	
	int t;
	scanf("%d",&t);
	int n;
	int z = 1;
	while(t--){
		scanf("%d",&n);
		int a[n+1][n+1];
		int b[n+1][n+1];
		//Sinh
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				if(j <= i) a[i][j] = j;
				else a[i][j] = 0;
			}
		}
		// Chuyen vi
		for(int i = 1; i <= n; i++){
		    for(int j = 1; j <= n; j++){
			    b[j][i] = a[i][j];
		    }
	    }
	    //
	    for(int i = 1; i <= n; i++){
	    	for(int j = 1; j <= n; j++){
	    		c[i][j] = 0;
			}
		}
		//Tich
		for(int i = 1; i <= n; i++){
		   for(int j = 1; j <= n ; j ++){
			    for(int k = 1; k <= n ; k++){
				    c[i][j] +=  a[i][k] * b[k][j];
				}
			}
		}
		
		printf("Test %d:\n",z);
	    z++;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				printf("%lld ",c[i][j]);
			}
			printf("\n");
		}
	    
	}
    return 0;
}

