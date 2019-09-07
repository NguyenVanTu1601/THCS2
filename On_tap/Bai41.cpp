#include<iostream>
#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin >> t;
	string s;
	while(t--){
		cin >> s;
		int i = 0;
		int j = s.length() - 1;
		int kt = 0;
		int sum = 0;
		if(s[i] != '8' || s[j] != '8'){
			kt = 1;
		}
		else {
			while(i <= j){
				if(s[i] != s[j]){
					kt = 1;
					break;
				}
				sum += (s[i] - '0') + (s[j] - '0');
				i++;
				j--;
			}
			if(sum % 10 != 0) kt = 1;
		}
		if(kt == 1) cout << "NO" << endl;
		else cout <<"YES" << endl;
		
	}
    return 0;
}

