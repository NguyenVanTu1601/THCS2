#include<iostream>
#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin >> t;
	int z = 1;
	while(t--){
		
		int n;
		cin >> n;
		int a[n+1][n+1];
		int d = 0;
		int gt = n * n;
		int hang = n - 1;
		int cot = n - 1;
		while(d<=n/2){
			for(int i=d;i<=cot;i++) a[d][i]=gt--;
			for(int i=d+1;i<=hang;i++) a[i][cot]=gt--;
			for(int i=cot-1;i>=d;i--) a[hang][i]=gt--;
			for(int i=hang-1;i>d;i--) a[i][d]=gt--;
			d++; hang--; cot--;
	    }
	    cout << "Test "<< z << ":" << endl;
	    for(int i = 0; i < n; i++){
	    	for(int j = 0; j < n; j++){
	    		cout << a[i][j] << " ";
			}
			cout << endl;
		}
		z++;
	}

    return 0;
}

