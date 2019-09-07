#include<iostream>
#include<bits/stdc++.h>
using namespace std;

main(){
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		if(i == 1 || i == n){
			for(int j = 1; j <= m; j++) cout << "* ";
			cout << endl;
		}
		else{
			for(int j = 1; j <= m; j++){
				if(j == 1|| j == m) cout <<"* ";
				else cout << "  ";
			}
			cout << endl;
		}
	}
    return 0;
}

