#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int a[10001][10001];
int toNumber(string s){
	int sum = 0;
	for(int i = 0; i < s.length(); i++){
		sum = sum * 10 + (s[i] - '0');
	}
	return sum;
}
main(){
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			a[i][j] = 0;
		}
	}
	
	string s[n + 1];
	cin.ignore();
	for(int i = 1; i <= n; i++){
		getline(cin,s[i]);
		for(int j = 0; j < s[i].length(); j++){
			string x;
			while(s[i][j] >= '0' && s[i][j] <= '9'){
				x += s[i][j];
				j++;
			}
			a[i][toNumber(x)] = 1;
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
    return 0;
}

