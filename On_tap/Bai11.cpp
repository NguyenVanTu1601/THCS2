#include<iostream>
#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin >> t;
	string s;
	while(t--){
		cin >> s;
		if(s[0] == s[s.length()-1]) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
    return 0;
}

