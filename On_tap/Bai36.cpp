#include<iostream>
#include<bits/stdc++.h>
using namespace std;
	
long long c[1000][1000];
main(){
	int t;
	scanf("%d",&t);
	int z = 1;
	int n, m;
	
	while(t != 0){
		
		scanf("%d%d",&n,&m);
		int a[n][m];
	    int b[m][n];
	
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}
		//Chuyen vi
		for(int i = 0; i < n; i++){
		    for(int j = 0; j < m; j++){
			    b[j][i] = a[i][j];
		    }
	    }
	    
	    for(int i = 0; i < n; i++){
	    	for(int j = 0; j < n; j++){
	    		c[i][j] = 0;
			}
		}
	    //Tich 
	    for(int i = 0; i < n; i++){
		   for(int j = 0; j < n ; j ++){
			    for(int k = 0; k < m ; k++){
				    c[i][j] +=  a[i][k] * b[k][j];
				}
			}
		}
	
	
		printf("Test %d:\n",z);
	    z++;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				
				printf("%lld ",c[i][j]);
			}
			printf("\n");
		}
		t--;
	
	}
    return 0;
}
/*
1 2   1 3 5   5 11 17
3 4   2 4 6  11 25 39 
5 6          17 39 61
*/

