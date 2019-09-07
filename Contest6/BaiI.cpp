#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int nt(char x){
	if(x != '2' && x != '3' && x != '5' && x != '7') return 0;
	return 1;
}
main(){
	int t;
	cin  >> t;
	string s;
	while(t--){
		cin >> s;
		int i = 0;
		int j = s.length() - 1;
		int kt = 0;
		while(i <= j){
			if(nt(s[i]) == 0 || nt(s[j]) == 0 || s[i] != s[j]){
				kt = 1;
				break;
			}
			i++;
			j--;
		}
		if(kt == 1) cout << "NO" << endl;
		else cout << "YES" << endl;
		
	}
    return 0;
}

