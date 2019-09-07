#include<bits/stdc++.h>
using namespace std;
bool cmp(int a, int b){
	return a > b;
}

main(){
	int t;
	scanf("%d", &t);
	int n;
	int z = 1;
	while(t--){
		scanf("%d", &n);
		int a[n+1];
		int b[n+1];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < n; i++){
			scanf("%d", &b[i]);
		}
		// Co the thay 2 ham nay bang cac ham sx tu code neu code C
		sort(a,a+n); //  Sap xep tang
		sort(b,b+n,cmp); // Sap xep giam 
		
		printf("Test %d:\n",z);
		z++;
		int x = 0; 
		int y = 0;
		for(int i = 0; i < n + n ; i++){
			if(i % 2 == 0){
				printf("%d ", a[x]);
				x++;
			}
			else{
				printf("%d ", b[y]);
				y++;
			}
		}
		printf("\n");
	}
    return 0;
}

