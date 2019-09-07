#include<iostream>
#include<bits/stdc++.h>
using namespace std;

main(){
	
	int a[100][100];
	int b[100][100];
	int n, m;
	scanf("%d%d",&n,&m);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
		    b[j][i] = a[i][j];
		}
	}
	
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){	
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
    return 0;
}

