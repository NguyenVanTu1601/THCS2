#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int nt(int n){
	if(n < 2) return 0;
	if(n == 2) return 1;
	else{
		for(int i = 2; i <= sqrt(n); i++){
			if(n % i == 0) return 0;
		}
		return 1;
	}
}
main(){
	int t;
	cin >> t;
	int n;
	int z = 1;
	while(t--){
		map<int,int> q;
		cin >> n;
		int x;
		for(int i = 1; i <= n; i++){
			cin >> x;
			q[x]++;
		}
		cout << "Test " << z << ":" << endl;
		z++;
		map<int,int>::iterator it;
		for(it = q.begin(); it != q.end(); it++){
			if(nt(it->first) == 1) cout << it->first << " xuat hien " << it->second << " lan" << endl;
		}
	}
    return 0;
}

