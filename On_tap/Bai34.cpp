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
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				cin >> a[i][j];
			}
		}
		cout << "Test " << z << ":"<< endl;
		for(int i = 2; i <= n; i++){
			for(int j = 2; j <= m; j++){
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
		z++;
	}
    return 0;
}

