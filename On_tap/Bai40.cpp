#include<iostream>
#include<bits/stdc++.h>
using namespace std;

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
			if((s[i] - '0') % 2 != 0 || (s[j] - '0') % 2 != 0 || s[i] != s[j]){
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

