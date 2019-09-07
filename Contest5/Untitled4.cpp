#include<iostream>
#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin >> t;
	int n, m;
	int z = 1;
	while(t--){
		cin >> n >> m;
		int a[n+1][m+1];
		int sumh = 0;
		int sumc = 0;
		int vth;
		int vtc;
		
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				cin >> a[i][j];
			}
		}
		for(int i = 1; i <= n; i++){
			int sum = 0;
			for(int j = 1; j <= m; j++){
				sum += a[i][j];
			}
			if(sum > sumh) {
				sumh = sum;
				vth = i;
			}
		}
		
		
		for(int j = 1; j <= m; j++){
			a[vth][j] = 0;
		}
		
		for(int i = 1; i <= m; i++){
			int sum1 = 0;
			for(int j = 1; j <= n; j++){
				sum1 += a[j][i];	
			}
			
			if(sum1 > sumc) {
				sumc = sum1;
				vtc = i;
			}
		}
		for(int j = 1; j <= n; j++){
			a[j][vtc] = 0;
		}

		cout << "Test " << z << ":" << endl;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				if(i != vth && j != vtc){
					cout << a[i][j] << " ";
				}
			}
		   if(i != vth) cout << endl;
		}
		z++;
	}
    return 0;
}

